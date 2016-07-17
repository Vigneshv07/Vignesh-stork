#ifndef VIGNESH-STORKAPP_H
#define VIGNESH-STORKAPP_H

#include "MooseApp.h"

class Vignesh-StorkApp;

template<>
InputParameters validParams<Vignesh-StorkApp>();

class Vignesh-StorkApp : public MooseApp
{
public:
  Vignesh-StorkApp(InputParameters parameters);
  virtual ~Vignesh-StorkApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* VIGNESH-STORKAPP_H */
