#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass SS_TurnActor_JointGestureTarget_Interp.SS_TurnActor_JointGestureTarget_Interp_C
	 * Size -> 0x0004 (FullSize[0x0044] - InheritedSize[0x0040])
	 */
	class USS_TurnActor_JointGestureTarget_Interp_C : public USS_TurnActor_CurveMove_C
	{
	public:
		float                                                      InterpSpeed;                                             // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float ReceiveGetInterpSpeed();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
