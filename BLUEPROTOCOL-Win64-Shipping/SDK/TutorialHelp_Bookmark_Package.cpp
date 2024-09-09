/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.SetErrorData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        HelpId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialHelp_Bookmark_C::SetErrorData(const class FName& HelpId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.SetErrorData");
		
		UTutorialHelp_Bookmark_C_SetErrorData_Params params {};
		params.HelpId = HelpId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.ISCurrentPageEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTutorialHelp_Bookmark_C::ISCurrentPageEnd(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.ISCurrentPageEnd");
		
		UTutorialHelp_Bookmark_C_ISCurrentPageEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.UpdatePageButton
	 * 		Flags  -> ()
	 */
	void UTutorialHelp_Bookmark_C::UpdatePageButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.UpdatePageButton");
		
		UTutorialHelp_Bookmark_C_UpdatePageButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.FindTurotialHelpData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFind                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBTutorialHelpData                         Ret                                                        (Parm, OutParm)
	 */
	void UTutorialHelp_Bookmark_C::FindTurotialHelpData(const class FName& InId, bool* bFind, struct FSBTutorialHelpData* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.FindTurotialHelpData");
		
		UTutorialHelp_Bookmark_C_FindTurotialHelpData_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFind != nullptr)
			*bFind = params.bFind;
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnLoaded_053AD1B74FF9010B3058FCA29708A05E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialHelp_Bookmark_C::OnLoaded_053AD1B74FF9010B3058FCA29708A05E(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnLoaded_053AD1B74FF9010B3058FCA29708A05E");
		
		UTutorialHelp_Bookmark_C_OnLoaded_053AD1B74FF9010B3058FCA29708A05E_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.SetHelpData2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBTutorialHelpData                         InData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UTutorialHelp_Bookmark_C::SetHelpData2(int32_t InPage, const struct FSBTutorialHelpData& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.SetHelpData2");
		
		UTutorialHelp_Bookmark_C_SetHelpData2_Params params {};
		params.InPage = InPage;
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InSubMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTutorialHelp_Bookmark_C::Init(const class FName& InId, bool InSubMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.Init");
		
		UTutorialHelp_Bookmark_C_Init_Params params {};
		params.InId = InId;
		params.InSubMode = InSubMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.UpdateUI
	 * 		Flags  -> ()
	 */
	void UTutorialHelp_Bookmark_C::UpdateUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.UpdateUI");
		
		UTutorialHelp_Bookmark_C_UpdateUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTutorialHelp_Bookmark_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UTutorialHelp_Bookmark_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTutorialHelp_Bookmark_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UTutorialHelp_Bookmark_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnNextPage
	 * 		Flags  -> ()
	 */
	void UTutorialHelp_Bookmark_C::OnNextPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnNextPage");
		
		UTutorialHelp_Bookmark_C_OnNextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.Construct
	 * 		Flags  -> ()
	 */
	void UTutorialHelp_Bookmark_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.Construct");
		
		UTutorialHelp_Bookmark_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.Destruct
	 * 		Flags  -> ()
	 */
	void UTutorialHelp_Bookmark_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.Destruct");
		
		UTutorialHelp_Bookmark_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnClose_Event
	 * 		Flags  -> ()
	 */
	void UTutorialHelp_Bookmark_C::OnClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnClose_Event");
		
		UTutorialHelp_Bookmark_C_OnClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UTutorialHelp_Bookmark_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnPress_Cancel");
		
		UTutorialHelp_Bookmark_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnForceClose_Event
	 * 		Flags  -> ()
	 */
	void UTutorialHelp_Bookmark_C::OnForceClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnForceClose_Event");
		
		UTutorialHelp_Bookmark_C_OnForceClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.BndEvt__TutorialHelp_Bookmark_CmnClose01_393_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTutorialHelp_Bookmark_C::BndEvt__TutorialHelp_Bookmark_CmnClose01_393_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.BndEvt__TutorialHelp_Bookmark_CmnClose01_393_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		UTutorialHelp_Bookmark_C_BndEvt__TutorialHelp_Bookmark_CmnClose01_393_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.ExecuteUbergraph_TutorialHelp_Bookmark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialHelp_Bookmark_C::ExecuteUbergraph_TutorialHelp_Bookmark(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.ExecuteUbergraph_TutorialHelp_Bookmark");
		
		UTutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTutorialHelp_Bookmark_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnClose__DelegateSignature");
		
		UTutorialHelp_Bookmark_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialHelp_Bookmark_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialHelp_Bookmark_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialHelp_Bookmark.TutorialHelp_Bookmark_C");
		return ptr;
	}

}


