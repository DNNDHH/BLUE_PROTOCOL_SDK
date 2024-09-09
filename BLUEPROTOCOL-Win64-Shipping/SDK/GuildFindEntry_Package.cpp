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
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.Set Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildFindEntry_C::SetEntry(const struct FGuildEntryData& Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.Set Entry");
		
		UGuildFindEntry_C_SetEntry_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.Find Guild Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             Output_Get                                                 (Parm, OutParm)
	 */
	void UGuildFindEntry_C::FindGuildEntry(struct FGuildEntryData* Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.Find Guild Entry");
		
		UGuildFindEntry_C_FindGuildEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildFindEntry_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.GetGuildComp");
		
		UGuildFindEntry_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.SetGuildData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildData                                  GuildData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildFindEntry_C::SetGuildData(const struct FGuildData& GuildData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.SetGuildData");
		
		UGuildFindEntry_C_SetGuildData_Params params {};
		params.GuildData = GuildData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.OnCompletedGuildEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildFindEntry_C::OnCompletedGuildEntries(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.OnCompletedGuildEntries");
		
		UGuildFindEntry_C_OnCompletedGuildEntries_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.UpdateButtons
	 * 		Flags  -> ()
	 */
	void UGuildFindEntry_C::UpdateButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.UpdateButtons");
		
		UGuildFindEntry_C_UpdateButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.Initialize
	 * 		Flags  -> ()
	 */
	void UGuildFindEntry_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.Initialize");
		
		UGuildFindEntry_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.OnCancelDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildFindEntry_C::OnCancelDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.OnCancelDialog");
		
		UGuildFindEntry_C_OnCancelDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.Show Guild
	 * 		Flags  -> ()
	 */
	void UGuildFindEntry_C::ShowGuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.Show Guild");
		
		UGuildFindEntry_C_ShowGuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.NotFound
	 * 		Flags  -> ()
	 */
	void UGuildFindEntry_C::NotFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.NotFound");
		
		UGuildFindEntry_C_NotFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.OnCloseEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      OnButton                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InputText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildFindEntry_C::OnCloseEntry(EDialogResult OnButton, const class FText& InputText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.OnCloseEntry");
		
		UGuildFindEntry_C_OnCloseEntry_Params params {};
		params.OnButton = OnButton;
		params.InputText = InputText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Applicate_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildFindEntry_C::BndEvt__GuildFindEntry_Btn_Applicate_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Applicate_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UGuildFindEntry_C_BndEvt__GuildFindEntry_Btn_Applicate_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Research_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildFindEntry_C::BndEvt__GuildFindEntry_Btn_Research_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Research_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");
		
		UGuildFindEntry_C_BndEvt__GuildFindEntry_Btn_Research_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Cancel_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildFindEntry_C::BndEvt__GuildFindEntry_Btn_Cancel_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Cancel_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");
		
		UGuildFindEntry_C_BndEvt__GuildFindEntry_Btn_Cancel_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Accept_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildFindEntry_C::BndEvt__GuildFindEntry_Btn_Accept_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Accept_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature");
		
		UGuildFindEntry_C_BndEvt__GuildFindEntry_Btn_Accept_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_WithDraw_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildFindEntry_C::BndEvt__GuildFindEntry_Btn_WithDraw_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_WithDraw_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature");
		
		UGuildFindEntry_C_BndEvt__GuildFindEntry_Btn_WithDraw_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildFindEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.Construct");
		
		UGuildFindEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.ExecuteUbergraph_GuildFindEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildFindEntry_C::ExecuteUbergraph_GuildFindEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.ExecuteUbergraph_GuildFindEntry");
		
		UGuildFindEntry_C_ExecuteUbergraph_GuildFindEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildFindEntry.GuildFindEntry_C.OnResearchGuild__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildFindEntry_C::OnResearchGuild__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildFindEntry.GuildFindEntry_C.OnResearchGuild__DelegateSignature");
		
		UGuildFindEntry_C_OnResearchGuild__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildFindEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildFindEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildFindEntry.GuildFindEntry_C");
		return ptr;
	}

}


