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
	 * 		Name   -> Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.SetGuildTutorialMessage
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentEmptyItem_C::SetGuildTutorialMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.SetGuildTutorialMessage");
		
		UGuildRecruitmentEmptyItem_C_SetGuildTutorialMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.SetMainMessageFromId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TextId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentEmptyItem_C::SetMainMessageFromId(int32_t TextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.SetMainMessageFromId");
		
		UGuildRecruitmentEmptyItem_C_SetMainMessageFromId_Params params {};
		params.TextId = TextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentEmptyItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.Construct");
		
		UGuildRecruitmentEmptyItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.ExecuteUbergraph_GuildRecruitmentEmptyItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentEmptyItem_C::ExecuteUbergraph_GuildRecruitmentEmptyItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.ExecuteUbergraph_GuildRecruitmentEmptyItem");
		
		UGuildRecruitmentEmptyItem_C_ExecuteUbergraph_GuildRecruitmentEmptyItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildRecruitmentEmptyItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildRecruitmentEmptyItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C");
		return ptr;
	}

}


