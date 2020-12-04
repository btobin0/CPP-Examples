#include <iostream>

using namespace std;

struct Inputs{
    double spot_vol;
    double futures_vol;
    double rho;
};

void setupExample (Inputs &i){
    i.spot_vol = 0.2;
    i.futures_vol = 0.3;
    i.rho = 0.9;
}

void basis_risk (Inputs &i){
    double hedgeRatio = 0.3;
    do {
        cout << "Hedge Ratio = " << hedgeRatio
        << " Basis Risk = "
        << (i.spot_vol*i.spot_vol+(hedgeRatio*i.futures_vol)
                                *(hedgeRatio*i.futures_vol)
            - (2*hedgeRatio*i.spot_vol*i.futures_vol*i.rho)) << endl;
        hedgeRatio = hedgeRatio + 0.1;
    } while (hedgeRatio < 1);
}

void min_var_hedge(const Inputs &i){
    cout << endl;
    cout << " Min Var hedge : " << i.rho*i.spot_vol/i.futures_vol << endl;
}

int main() {
    cout << " Hello World! " << endl;
    Inputs i;
    setupExample (i);
    basis_risk (i);
    min_var_hedge (i);
    return 0;
}
