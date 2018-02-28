#include <ScriptObject.h>
#include <Zone/InstanceContent.h>

class TheStoneVigil : public InstanceContentScript
{
public:
   TheStoneVigil() : InstanceContentScript( 11 )
   { }

   void onInit( InstanceContentPtr instance ) override
   {
      
      instance->registerEObj( "Unknown0", 2000611, 0, 4, { 0.015198f, 0.350891f, -246.784195f }, 0.991760f );
      instance->registerEObj( "Unknown1", 2001869, 4239670, 4, { -0.000510f, 3.949623f, 307.392395f }, 2.000000f );
      instance->registerEObj( "Unknown2", 2001870, 0, 4, { 0.015198f, 3.949618f, 317.179199f }, 0.991760f );
      instance->registerEObj( "Exit", 2001871, 4239710, 4, { 0.004404f, 0.076945f, -268.716095f }, 1.000000f );
      instance->registerEObj( "Unknown3", 2001872, 4239719, 4, { -0.106873f, 3.860474f, 136.491898f }, 0.991760f );
      instance->registerEObj( "Unknown4", 2001873, 4239720, 4, { -0.625671f, 3.829956f, 136.461395f }, 0.991760f );
      instance->registerEObj( "Unknown5", 2001874, 4239769, 4, { 20.620710f, 3.949919f, -80.003052f }, 0.991760f );
      instance->registerEObj( "Unknown6", 2001875, 4239782, 4, { 20.559681f, 3.949919f, -80.277771f }, 0.991760f );
      instance->registerEObj( "Unknown7", 2001876, 4239833, 4, { -0.197872f, 4.844441f, -223.182404f }, 1.000000f );
      instance->registerEObj( "Unknown8", 2001877, 4239838, 4, { 0.816688f, 4.854907f, -223.199707f }, 1.000000f );
      instance->registerEObj( "Shortcut", 2000700, 0, 4, { 3.484173f, 4.000121f, 298.130005f }, 1.000000f );
      instance->registerEObj( "Unknown9", 2001878, 4239736, 4, { 0.228821f, 3.982544f, 95.231567f }, 0.991760f );
      instance->registerEObj( "Unknown10", 2001879, 4239917, 4, { -0.137390f, -0.076355f, -90.104553f }, 0.991760f );
      instance->registerEObj( "Strongroomgate", 2001880, 4172415, 4, { -0.022534f, 4.052033f, -215.388901f }, 1.000000f );
      instance->registerEObj( "Unknown11", 2001881, 4240140, 4, { 24.443140f, -0.000003f, -16.325529f }, 1.000000f );
      instance->registerEObj( "Unknown12", 2001882, 4240143, 4, { 24.207170f, -0.386616f, -119.586502f }, 1.000000f );
      instance->registerEObj( "Unknown13", 2001883, 4240145, 4, { 24.277100f, -0.015320f, -168.047699f }, 0.991760f );
      instance->registerEObj( "Bertha", 2001884, 0, 4, { 56.748291f, 4.989685f, -86.472900f }, 0.991760f );
      instance->registerEObj( "Bertha", 2001885, 0, 4, { 58.899940f, 4.989685f, -79.857857f }, 0.991760f );
      instance->registerEObj( "Bertha", 2001886, 0, 4, { 56.935600f, 5.003687f, -73.150261f }, 0.991760f );
      instance->registerEObj( "Unknown14", 2002618, 4334349, 4, { -0.221096f, 4.007471f, 137.674500f }, 1.000000f );
      instance->registerEObj( "Unknown15", 2002618, 4334437, 4, { 0.000000f, 5.259686f, -221.867004f }, 1.000000f );
      instance->registerEObj( "Unknown16", 2002618, 4334925, 4, { -0.016311f, 0.434590f, -224.636993f }, 1.000000f );
      instance->registerEObj( "Unknown17", 2002618, 4334973, 4, { 0.117383f, 0.135054f, -224.822800f }, 1.000000f );
   }

   void onUpdate( InstanceContentPtr instance, uint32_t currTime ) override
   {

   }

   void onEnterTerritory( Entity::Player &player, uint32_t eventId, uint16_t param1, uint16_t param2 ) override
   {

   }

};