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
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.CheckTypedNewGuildTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGuildRenameDialog_C::CheckTypedNewGuildTag(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.CheckTypedNewGuildTag");
		
		UGuildRenameDialog_C_CheckTypedNewGuildTag_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.CheckTypedNewGuildName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGuildRenameDialog_C::CheckTypedNewGuildName(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.CheckTypedNewGuildName");
		
		UGuildRenameDialog_C_CheckTypedNewGuildName_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildRenameDialog_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.GetGuildComp");
		
		UGuildRenameDialog_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__Btn_OutCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::BndEvt__Btn_OutCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__Btn_OutCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UGuildRenameDialog_C_BndEvt__Btn_OutCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRenameDialog_C::BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UGuildRenameDialog_C_BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRenameDialog_C::BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UGuildRenameDialog_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.UpdateExecButton
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::UpdateExecButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.UpdateExecButton");
		
		UGuildRenameDialog_C_UpdateExecButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.Initialize
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.Initialize");
		
		UGuildRenameDialog_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.OnComplete_DuplicationChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsDuplicate                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildRenameDialog_C::OnComplete_DuplicationChecked(int32_t RetCode, bool bIsDuplicate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.OnComplete_DuplicationChecked");
		
		UGuildRenameDialog_C_OnComplete_DuplicationChecked_Params params {};
		params.RetCode = RetCode;
		params.bIsDuplicate = bIsDuplicate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.Destruct
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.Destruct");
		
		UGuildRenameDialog_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.OnChangedName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRenameDialog_C::OnChangedName(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.OnChangedName");
		
		UGuildRenameDialog_C_OnChangedName_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.Construct");
		
		UGuildRenameDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.RemoveNetworking
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::RemoveNetworking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.RemoveNetworking");
		
		UGuildRenameDialog_C_RemoveNetworking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.CreateNetWorking
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::CreateNetWorking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.CreateNetWorking");
		
		UGuildRenameDialog_C_CreateNetWorking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UGuildRenameDialog_C_BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::BndEvt__GuildRenameDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");
		
		UGuildRenameDialog_C_BndEvt__GuildRenameDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.Close
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.Close");
		
		UGuildRenameDialog_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGuildRenameDialog_C::BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UGuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGuildRenameDialog_C::BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UGuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRenameDialog_C::BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature");
		
		UGuildRenameDialog_C_BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UGuildRenameDialog_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.UnBindEvent
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::UnBindEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.UnBindEvent");
		
		UGuildRenameDialog_C_UnBindEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.ExecuteUbergraph_GuildRenameDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRenameDialog_C::ExecuteUbergraph_GuildRenameDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.ExecuteUbergraph_GuildRenameDialog");
		
		UGuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.OnChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::OnChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.OnChanged__DelegateSignature");
		
		UGuildRenameDialog_C_OnChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRenameDialog.GuildRenameDialog_C.OnCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildRenameDialog_C::OnCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRenameDialog.GuildRenameDialog_C.OnCancel__DelegateSignature");
		
		UGuildRenameDialog_C_OnCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildRenameDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildRenameDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildRenameDialog.GuildRenameDialog_C");
		return ptr;
	}

}


