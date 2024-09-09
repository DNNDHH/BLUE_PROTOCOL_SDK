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
	 * Function LibraryMenu_Search.LibraryMenu_Search_C.GetSerchKeyword
	 */
	struct ULibraryMenu_Search_C_GetSerchKeyword_Params
	{
	public:
		class FString                                              SerchKeyword;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Search.LibraryMenu_Search_C.ClearText
	 */
	struct ULibraryMenu_Search_C_ClearText_Params
	{	};

	/**
	 * Function LibraryMenu_Search.LibraryMenu_Search_C.BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Search_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LibraryMenu_Search.LibraryMenu_Search_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_Search_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Search.LibraryMenu_Search_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_Search_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Search.LibraryMenu_Search_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Search_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Search.LibraryMenu_Search_C.ExecuteUbergraph_LibraryMenu_Search
	 */
	struct ULibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RRO8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Search.LibraryMenu_Search_C.OnTextChange__DelegateSignature
	 */
	struct ULibraryMenu_Search_C_OnTextChange__DelegateSignature_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
