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
	 * Function ForceNavigationMask.ForceNavigationMask_C.SetBlackMaskAlpha
	 */
	struct UForceNavigationMask_C_SetBlackMaskAlpha_Params
	{
	public:
		float                                                      InAlpha;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ForceNavigationMask.ForceNavigationMask_C.Activate
	 */
	struct UForceNavigationMask_C_Activate_Params
	{
	public:
		class FName                                                InDataTableKey;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ForceNavigationMask.ForceNavigationMask_C.Standby
	 */
	struct UForceNavigationMask_C_Standby_Params
	{	};

	/**
	 * Function ForceNavigationMask.ForceNavigationMask_C.SetEffect
	 */
	struct UForceNavigationMask_C_SetEffect_Params
	{	};

	/**
	 * Function ForceNavigationMask.ForceNavigationMask_C.SetMask
	 */
	struct UForceNavigationMask_C_SetMask_Params
	{	};

	/**
	 * Function ForceNavigationMask.ForceNavigationMask_C.Construct
	 */
	struct UForceNavigationMask_C_Construct_Params
	{	};

	/**
	 * Function ForceNavigationMask.ForceNavigationMask_C.Destruct
	 */
	struct UForceNavigationMask_C_Destruct_Params
	{	};

	/**
	 * Function ForceNavigationMask.ForceNavigationMask_C.OnSBButtonClicked
	 */
	struct UForceNavigationMask_C_OnSBButtonClicked_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ForceNavigationMask.ForceNavigationMask_C.DebugExit
	 */
	struct UForceNavigationMask_C_DebugExit_Params
	{	};

	/**
	 * Function ForceNavigationMask.ForceNavigationMask_C.ExecuteUbergraph_ForceNavigationMask
	 */
	struct UForceNavigationMask_C_ExecuteUbergraph_ForceNavigationMask_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ForceNavigationMask.ForceNavigationMask_C.OnClose__DelegateSignature
	 */
	struct UForceNavigationMask_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
