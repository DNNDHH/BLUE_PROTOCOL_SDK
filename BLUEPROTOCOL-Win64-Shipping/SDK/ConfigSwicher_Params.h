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
	 * Function ConfigSwicher.ConfigSwicher_C.InitializeCS
	 */
	struct UConfigSwicher_C_InitializeCS_Params
	{	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.GenerateConfigs
	 */
	struct UConfigSwicher_C_GenerateConfigs_Params
	{	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.YesNoCheckResult
	 */
	struct UConfigSwicher_C_YesNoCheckResult_Params
	{
	public:
		bool                                                       bIsYes;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.Get Widget
	 */
	struct UConfigSwicher_C_GetWidget_Params
	{
	public:
		EConfigurations                                            NectConfig;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6008[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.SetCloseState
	 */
	struct UConfigSwicher_C_SetCloseState_Params
	{
	public:
		bool                                                       Close;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.IsClosed
	 */
	struct UConfigSwicher_C_IsClosed_Params
	{
	public:
		bool                                                       IsClosed;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.IsCommandKeyAsNone
	 */
	struct UConfigSwicher_C_IsCommandKeyAsNone_Params
	{
	public:
		bool                                                       bNone;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.IsChanged
	 */
	struct UConfigSwicher_C_IsChanged_Params
	{
	public:
		bool                                                       IsChanged;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.Construct
	 */
	struct UConfigSwicher_C_Construct_Params
	{	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.ChangeConfigMode
	 */
	struct UConfigSwicher_C_ChangeConfigMode_Params
	{
	public:
		EConfigurations                                            Configurations;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.Changed
	 */
	struct UConfigSwicher_C_Changed_Params
	{
	public:
		bool                                                       bConfigChanged;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.YesNoCheck
	 */
	struct UConfigSwicher_C_YesNoCheck_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.CheckChanged
	 */
	struct UConfigSwicher_C_CheckChanged_Params
	{	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.IsNone
	 */
	struct UConfigSwicher_C_IsNone_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.LocalSave
	 */
	struct UConfigSwicher_C_LocalSave_Params
	{	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.BndEvt__KeyConfig_K2Node_ComponentBoundEvent_1_RequestParentFocus__DelegateSignature
	 */
	struct UConfigSwicher_C_BndEvt__KeyConfig_K2Node_ComponentBoundEvent_1_RequestParentFocus__DelegateSignature_Params
	{	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.SetTitleMode
	 */
	struct UConfigSwicher_C_SetTitleMode_Params
	{
	public:
		bool                                                       bTitleMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.ShowError None
	 */
	struct UConfigSwicher_C_ShowErrorNone_Params
	{	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.ExecuteUbergraph_ConfigSwicher
	 */
	struct UConfigSwicher_C_ExecuteUbergraph_ConfigSwicher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B16Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.OnHasChenged__DelegateSignature
	 */
	struct UConfigSwicher_C_OnHasChenged__DelegateSignature_Params
	{	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.RequestParentFocus__DelegateSignature
	 */
	struct UConfigSwicher_C_RequestParentFocus__DelegateSignature_Params
	{	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.FailChanged__DelegateSignature
	 */
	struct UConfigSwicher_C_FailChanged__DelegateSignature_Params
	{	};

	/**
	 * Function ConfigSwicher.ConfigSwicher_C.SuccessChanged__DelegateSignature
	 */
	struct UConfigSwicher_C_SuccessChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
