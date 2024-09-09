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
	 * Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.Construct
	 */
	struct UUMG_BNIDLoginBrowser_C_Construct_Params
	{	};

	/**
	 * Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature
	 */
	struct UUMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.LoginCompleted
	 */
	struct UUMG_BNIDLoginBrowser_C_LoginCompleted_Params
	{	};

	/**
	 * Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.Destruct
	 */
	struct UUMG_BNIDLoginBrowser_C_Destruct_Params
	{	};

	/**
	 * Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature
	 */
	struct UUMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Frame;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.ExecuteUbergraph_UMG_BNIDLoginBrowser
	 */
	struct UUMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E0P1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.OnLoginCompleted__DelegateSignature
	 */
	struct UUMG_BNIDLoginBrowser_C_OnLoginCompleted__DelegateSignature_Params
	{
	public:
		class FString                                              ApiToken;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
