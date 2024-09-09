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
	 * Function P012HUDShield.P012HUDShield_C.IsEquipDependent
	 */
	struct UP012HUDShield_C_IsEquipDependent_Params
	{
	public:
		bool                                                       TrueIsEquip;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.SetGaugeVisible
	 */
	struct UP012HUDShield_C_SetGaugeVisible_Params
	{
	public:
		bool                                                       TrueIsVisible;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.SetCount
	 */
	struct UP012HUDShield_C_SetCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WXZG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.SetCountVisibility
	 */
	struct UP012HUDShield_C_SetCountVisibility_Params
	{
	public:
		bool                                                       NoHitSelforCollapse;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CUSR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.UpdateDependent
	 */
	struct UP012HUDShield_C_UpdateDependent_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.OnSetEditMode
	 */
	struct UP012HUDShield_C_OnSetEditMode_Params
	{
	public:
		bool                                                       InIsEdit;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.OnTick
	 */
	struct UP012HUDShield_C_OnTick_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.OnTerminate
	 */
	struct UP012HUDShield_C_OnTerminate_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.OnInitialize
	 */
	struct UP012HUDShield_C_OnInitialize_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.OnUnbind
	 */
	struct UP012HUDShield_C_OnUnbind_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.OnBind
	 */
	struct UP012HUDShield_C_OnBind_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.PlayAnimReverseInOut
	 */
	struct UP012HUDShield_C_PlayAnimReverseInOut_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.PlayAnimForwardInOut
	 */
	struct UP012HUDShield_C_PlayAnimForwardInOut_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.SetGauge
	 */
	struct UP012HUDShield_C_SetGauge_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.SetIcon
	 */
	struct UP012HUDShield_C_SetIcon_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.SetFrame
	 */
	struct UP012HUDShield_C_SetFrame_Params
	{
	public:
		bool                                                       IsBroken;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.UpdateShieldDurability
	 */
	struct UP012HUDShield_C_UpdateShieldDurability_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.UpdateShieldBreak
	 */
	struct UP012HUDShield_C_UpdateShieldBreak_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.StopAnimBroken
	 */
	struct UP012HUDShield_C_StopAnimBroken_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.PlayAnimBroken
	 */
	struct UP012HUDShield_C_PlayAnimBroken_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.OnChangeUIVisibleSetting
	 */
	struct UP012HUDShield_C_OnChangeUIVisibleSetting_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.BindVisibleSetting
	 */
	struct UP012HUDShield_C_BindVisibleSetting_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.UnbindVisibleSetting
	 */
	struct UP012HUDShield_C_UnbindVisibleSetting_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.BindOnStartIntervalDependent
	 */
	struct UP012HUDShield_C_BindOnStartIntervalDependent_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.UnBindOnStartIntervalDependent
	 */
	struct UP012HUDShield_C_UnBindOnStartIntervalDependent_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.On_StartIntervalDependent
	 */
	struct UP012HUDShield_C_On_StartIntervalDependent_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.BindOnEndIntervalDependent
	 */
	struct UP012HUDShield_C_BindOnEndIntervalDependent_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.UnBindOnEndIntervalDependent
	 */
	struct UP012HUDShield_C_UnBindOnEndIntervalDependent_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.On_EndIntervalDependent
	 */
	struct UP012HUDShield_C_On_EndIntervalDependent_Params
	{	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.Tick
	 */
	struct UP012HUDShield_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P012HUDShield.P012HUDShield_C.ExecuteUbergraph_P012HUDShield
	 */
	struct UP012HUDShield_C_ExecuteUbergraph_P012HUDShield_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PHPH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
