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
	 * Function CommonBattleHudComponent.CommonBattleHudComponent_C.IsEnable
	 */
	struct UCommonBattleHudComponent_C_IsEnable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonBattleHudComponent.CommonBattleHudComponent_C.ShowHUD
	 */
	struct UCommonBattleHudComponent_C_ShowHUD_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonBattleHudComponent.CommonBattleHudComponent_C.UpdateHud
	 */
	struct UCommonBattleHudComponent_C_UpdateHud_Params
	{	};

	/**
	 * Function CommonBattleHudComponent.CommonBattleHudComponent_C.OnTick
	 */
	struct UCommonBattleHudComponent_C_OnTick_Params
	{	};

	/**
	 * Function CommonBattleHudComponent.CommonBattleHudComponent_C.DestroyHud
	 */
	struct UCommonBattleHudComponent_C_DestroyHud_Params
	{	};

	/**
	 * Function CommonBattleHudComponent.CommonBattleHudComponent_C.SetupHUD
	 */
	struct UCommonBattleHudComponent_C_SetupHUD_Params
	{	};

	/**
	 * Function CommonBattleHudComponent.CommonBattleHudComponent_C.SetRayHit
	 */
	struct UCommonBattleHudComponent_C_SetRayHit_Params
	{
	public:
		bool                                                       bRayHit;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonBattleHudComponent.CommonBattleHudComponent_C.AttackHit
	 */
	struct UCommonBattleHudComponent_C_AttackHit_Params
	{
	public:
		bool                                                       IsCritical;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveBeginPlay
	 */
	struct UCommonBattleHudComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveTick
	 */
	struct UCommonBattleHudComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveEndPlay
	 */
	struct UCommonBattleHudComponent_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonBattleHudComponent.CommonBattleHudComponent_C.ExecuteUbergraph_CommonBattleHudComponent
	 */
	struct UCommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
