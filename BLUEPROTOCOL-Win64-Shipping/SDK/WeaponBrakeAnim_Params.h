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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WeaponBrakeAnim.WeaponBrakeAnim_C.PlayAnim
	 */
	struct UWeaponBrakeAnim_C_PlayAnim_Params
	{	};

	/**
	 * Function WeaponBrakeAnim.WeaponBrakeAnim_C.OnAnimationFinished
	 */
	struct UWeaponBrakeAnim_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponBrakeAnim.WeaponBrakeAnim_C.EnableQuit
	 */
	struct UWeaponBrakeAnim_C_EnableQuit_Params
	{	};

	/**
	 * Function WeaponBrakeAnim.WeaponBrakeAnim_C.Replay
	 */
	struct UWeaponBrakeAnim_C_Replay_Params
	{	};

	/**
	 * Function WeaponBrakeAnim.WeaponBrakeAnim_C.ExecuteUbergraph_WeaponBrakeAnim
	 */
	struct UWeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AF8V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponBrakeAnim.WeaponBrakeAnim_C.OnAnimFinished__DelegateSignature
	 */
	struct UWeaponBrakeAnim_C_OnAnimFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
