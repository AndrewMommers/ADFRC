/*
- Inheritance and definitions for helicopters
- Placed in CfgVehicles
*/

class Air;
class Helicopter: Air
{
	class Turrets;
	class HitPoints;
};
class Helicopter_Base_F: Helicopter
{
	class HitPoints: HitPoints
	{
		class HitHull;
		class HitFuel;
		class HitAvionics;
		class HitMissiles;
		class HitEngine1;
		class HitEngine2;
		class HitTurret;
		class HitHRotor;
		class HitVRotor;
		class HitGlass1;
		class HitWinch;
	};
	class Turrets: Turrets
	{
		class MainTurret;
	};
	class AnimationSources;
	class EventHandlers;
	class ViewOptics;
	class ViewPilot;
	class Components;
};

