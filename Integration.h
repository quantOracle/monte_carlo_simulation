#ifndef __INTEGRATION_H_
#define __INTEGRATION_H_
template <class T>
class MathFunction;
class MonteCarloIntegration {
public:
 MonteCarloIntegration(MathFunction<double> &f);
 MonteCarloIntegration(const MonteCarloIntegration &p);
 ~MonteCarloIntegration();
 MonteCarloIntegration &operator=(const MonteCarloIntegration &p);
 void setNumSamples(int n);
 double getIntegral(double a, double b);
 double integrateRegion(double a, double b, double min, double max);
 
 private:
 MathFunction<double> &m_f;
 int m_numSamples;
};
#endif /* __INTEGRATION_H_ */

