double result[4];

void loop(void) {
    for (int i = 0; i < 4; i++) {
        printf("%.1lf\n", result[i]);
    }
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
        v[i] = k * v[i];
    }

    for (int i = 0; i < 4; i++) {
        printf("%.1lf\n", v[i]);
    }

    return result;
}

int dot_product(double u[], double v[]) {
    double sum = 0;

    for (int i = 0; i < 4; i++) {
        sum += u[i] * v[i];    
    }

    return sum;
}