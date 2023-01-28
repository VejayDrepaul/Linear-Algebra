double result[4];

void loop(void) {
    for (int i = 0; i < 4; i++) {
        printf("%.1lf\n", result[i]);
    }
}

void arithmetic(double u[], char operation, double v[]) {
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

    loop();
}

void scalar_product(double k, double v[]) {
    for (int i = 0; i < 4; i++) {
        result[i] = k * v[i];
    }

    loop();
}

void dot_product(double u[], double v[]) {
    double sum = 0;

    for (int i = 0; i < 4; i++) {
        sum += u[i] * v[i];    
    }

    printf("%.1lf\n", sum);
}