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
	 * Function P021Counter.P021Counter_C.InOut
	 */
	struct UP021Counter_C_InOut_Params
	{
	public:
		bool                                                       TrueIsIn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7A76[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function P021Counter.P021Counter_C.SetVisible
	 */
	struct UP021Counter_C_SetVisible_Params
	{
	public:
		bool                                                       TrueIsVisible;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P021Counter.P021Counter_C.SwitchIcon
	 */
	struct UP021Counter_C_SwitchIcon_Params
	{
	public:
		EP021CountType                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P021Counter.P021Counter_C.CheckG5
	 */
	struct UP021Counter_C_CheckG5_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E2CG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function P021Counter.P021Counter_C.SetCount
	 */
	struct UP021Counter_C_SetCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P021Counter.P021Counter_C.InitAnim
	 */
	struct UP021Counter_C_InitAnim_Params
	{	};

	/**
	 * Function P021Counter.P021Counter_C.PlayAnimFlash
	 */
	struct UP021Counter_C_PlayAnimFlash_Params
	{
	public:
		EP021CountType                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P021Counter.P021Counter_C.Construct
	 */
	struct UP021Counter_C_Construct_Params
	{	};

	/**
	 * Function P021Counter.P021Counter_C.Tick
	 */
	struct UP021Counter_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P021Counter.P021Counter_C.Bind
	 */
	struct UP021Counter_C_Bind_Params
	{	};

	/**
	 * Function P021Counter.P021Counter_C.Unbind
	 */
	struct UP021Counter_C_Unbind_Params
	{	};

	/**
	 * Function P021Counter.P021Counter_C.OnTakeDamageDownAmpBuffArea
	 */
	struct UP021Counter_C_OnTakeDamageDownAmpBuffArea_Params
	{	};

	/**
	 * Function P021Counter.P021Counter_C.OnGiveDamageUpAmpBuffArea
	 */
	struct UP021Counter_C_OnGiveDamageUpAmpBuffArea_Params
	{	};

	/**
	 * Function P021Counter.P021Counter_C.OnHealUpAmpBuffArea
	 */
	struct UP021Counter_C_OnHealUpAmpBuffArea_Params
	{	};

	/**
	 * Function P021Counter.P021Counter_C.Destruct
	 */
	struct UP021Counter_C_Destruct_Params
	{	};

	/**
	 * Function P021Counter.P021Counter_C.OnChangeUIVisibleSetting
	 */
	struct UP021Counter_C_OnChangeUIVisibleSetting_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P021Counter.P021Counter_C.BindVisibleSetting
	 */
	struct UP021Counter_C_BindVisibleSetting_Params
	{	};

	/**
	 * Function P021Counter.P021Counter_C.UnbindVisibleSetting
	 */
	struct UP021Counter_C_UnbindVisibleSetting_Params
	{	};

	/**
	 * Function P021Counter.P021Counter_C.OnSetEditMode
	 */
	struct UP021Counter_C_OnSetEditMode_Params
	{
	public:
		bool                                                       InIsEdit;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P021Counter.P021Counter_C.AnimEnd
	 */
	struct UP021Counter_C_AnimEnd_Params
	{	};

	/**
	 * Function P021Counter.P021Counter_C.ExecuteUbergraph_P021Counter
	 */
	struct UP021Counter_C_ExecuteUbergraph_P021Counter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
