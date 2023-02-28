#ifndef FEATUREFACTORY_H
#define FEATUREFACTORY_H

enum FeatureType {
    kConst,
    kStatic
};

class FeatureFactory
{
public:
    FeatureFactory();
    FeatureFactory* create(FeatureType e);
};

#endif // FEATUREFACTORY_H
