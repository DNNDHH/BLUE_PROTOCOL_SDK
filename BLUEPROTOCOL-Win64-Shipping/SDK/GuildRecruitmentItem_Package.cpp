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
	 * 		Name   -> Function GuildRecruitmentItem.GuildRecruitmentItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentItem.GuildRecruitmentItem_C.Construct");
		
		UGuildRecruitmentItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentItem.GuildRecruitmentItem_C.BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentItem_C::BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentItem.GuildRecruitmentItem_C.BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UGuildRecruitmentItem_C_BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentItem.GuildRecruitmentItem_C.Unselected
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentItem_C::Unselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentItem.GuildRecruitmentItem_C.Unselected");
		
		UGuildRecruitmentItem_C_Unselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentItem.GuildRecruitmentItem_C.ExecuteUbergraph_GuildRecruitmentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentItem_C::ExecuteUbergraph_GuildRecruitmentItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentItem.GuildRecruitmentItem_C.ExecuteUbergraph_GuildRecruitmentItem");
		
		UGuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentItem.GuildRecruitmentItem_C.OnClicked_GuildEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             GuildEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildRecruitmentItem_C::OnClicked_GuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentItem.GuildRecruitmentItem_C.OnClicked_GuildEntry__DelegateSignature");
		
		UGuildRecruitmentItem_C_OnClicked_GuildEntry__DelegateSignature_Params params {};
		params.GuildEntry = GuildEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildRecruitmentItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildRecruitmentItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildRecruitmentItem.GuildRecruitmentItem_C");
		return ptr;
	}

}


