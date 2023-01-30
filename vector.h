#include <math.h>

double result[4];
double cross[3];

double norm(double v[]) {
    double norm_val = 0;

    for (int i = 0; i < 4; i++) {
        norm_val += v[i] * v[i];
    }

    norm_val = sqrt(norm_val);

    return norm_val;
}

double *arithmetic(double u[], char operation, double v[]) {
    if(operation == '+') {
        for (int i = 0; i < 4; i++) {
            result[i] = u[i] + v[i];
        }
    }
    else if(operation == '-') {
        for (int i = 0; i < 4; i++) {
            result[i] = u[i] - v[i];
        }
    }
    else if(operation == '*') {
        for (int i = 0; i < 4; i++) {
            result[i] = u[i] * v[i];
        }
    }

    return result;
}

double *scalar_product(double k, double v[]) {
    for (int i = 0; i < 4; i++) {
        result[i] = k * v[i];
    }

    return result;
}

double dot_product(double u[], double v[]) {
    double sum = 0;

    for (int i = 0; i < 4; i++) {
        sum += u[i] * v[i];    
    }

    return sum;
}

double *cross_product(double v[], double u[]) {
    cross[0] = (v[1]*u[2]) - (v[2]*u[1]);
    cross[1] = -((v[0]*u[2]) - (v[2]*u[0]));
    cross[2] = (v[0]*u[1]) - (v[1]*u[0]);

    return cross;
}

double *projection(double v[], double u[]) {
    for (int i = 0; i < 3; i++) {
        cross[i] = (dot_product(u, v) / (norm(v) * norm(v))) * v[i];
    }

    return cross;    
}

double angle(double v[], double u[]) {
    
}