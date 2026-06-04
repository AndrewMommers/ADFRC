/*
- Inheritance / templates for sensors and components
- Placed in root config
*/

class DefaultVehicleSystemsDisplayManagerLeft {};
class DefaultVehicleSystemsDisplayManagerRight {};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft {};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight {};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft {};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight {};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft {};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight {};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft {};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight {};
class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateLaser;
class SensorTemplateNV;
