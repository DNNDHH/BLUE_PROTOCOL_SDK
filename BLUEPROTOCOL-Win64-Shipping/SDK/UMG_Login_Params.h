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
	 * Function UMG_Login.UMG_Login_C.SaveLoginCache
	 */
	struct UUMG_Login_C_SaveLoginCache_Params
	{	};

	/**
	 * Function UMG_Login.UMG_Login_C.HideWindow
	 */
	struct UUMG_Login_C_HideWindow_Params
	{	};

	/**
	 * Function UMG_Login.UMG_Login_C.ShowWindow
	 */
	struct UUMG_Login_C_ShowWindow_Params
	{	};

	/**
	 * Function UMG_Login.UMG_Login_C.LoadLoginCache
	 */
	struct UUMG_Login_C_LoadLoginCache_Params
	{	};

	/**
	 * Function UMG_Login.UMG_Login_C.Init
	 */
	struct UUMG_Login_C_Init_Params
	{	};

	/**
	 * Function UMG_Login.UMG_Login_C.SetSaveData
	 */
	struct UUMG_Login_C_SetSaveData_Params
	{
	public:
		class FString                                              EMail;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Password;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       RememberMe;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_Login.UMG_Login_C.GetSaveData
	 */
	struct UUMG_Login_C_GetSaveData_Params
	{
	public:
		class FString                                              EMail;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Password;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       RemenberMe;                                              // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XGEG[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_Login.UMG_Login_C.ShowErrorDialog
	 */
	struct UUMG_Login_C_ShowErrorDialog_Params
	{
	public:
		class FText                                                ErrorText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_Login.UMG_Login_C.BndEvt__BtnLogin_K2Node_ComponentBoundEvent_275_EventOnClicked__DelegateSignature
	 */
	struct UUMG_Login_C_BndEvt__BtnLogin_K2Node_ComponentBoundEvent_275_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_Login.UMG_Login_C.BndEvt__BtnRegister_K2Node_ComponentBoundEvent_276_EventOnClicked__DelegateSignature
	 */
	struct UUMG_Login_C_BndEvt__BtnRegister_K2Node_ComponentBoundEvent_276_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_Login.UMG_Login_C.OnAnimationFinished
	 */
	struct UUMG_Login_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_Login.UMG_Login_C.Construct
	 */
	struct UUMG_Login_C_Construct_Params
	{	};

	/**
	 * Function UMG_Login.UMG_Login_C.ExecuteUbergraph_UMG_Login
	 */
	struct UUMG_Login_C_ExecuteUbergraph_UMG_Login_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DMYF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_Login.UMG_Login_C.OnRegister__DelegateSignature
	 */
	struct UUMG_Login_C_OnRegister__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_Login.UMG_Login_C.OnLogin__DelegateSignature
	 */
	struct UUMG_Login_C_OnLogin__DelegateSignature_Params
	{
	public:
		class FString                                              EMail;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Password;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
