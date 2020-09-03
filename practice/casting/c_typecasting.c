/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   c_typecasting.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 19:59:21 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 20:35:46 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int main() {
/* conversion */
    int         a = 42;             /* reference value */
    double      b = a;              /* implicit conversion cast */
    double      c = (double) a;     /* explicit conversion cast */

    double      d = a;              /* implicit promotion -> OK */
    int         e = d;              /* implicit demotion -> dangerous */
    int         f = (int) d;        /* explicit demotion -> OK */

/* reinterpretation (identity casts) */
    float       g = 420.042f;       /* reference value */
    void        *h = &g;            /* implicit reinterpretation cast */
    void        *i = (void *)&g;    /* explicit reinterpretation cast */

    void        *j = &g;            /* implicit promotion -> OK */
    int         *k = j;             /* implicit demotion -> dangerous */
    int         *l = (int *)j;      /* explicit demotion -> OK */

/* qualifier reinterpretation: no bit transformation */
    int const   *m = &a;                /* implicit type qualifier cast */
    int const   *n = (int const *) &a   /* explicit type qualifier cast */

    int const   *o = &a;                /* implicit promotion -> OK */
    int         *p = o;                 /* implicit demotion -> Nope! */
    int         *q = (int *)o;          /* explicit demotion -> OK */

    return (0);
}
