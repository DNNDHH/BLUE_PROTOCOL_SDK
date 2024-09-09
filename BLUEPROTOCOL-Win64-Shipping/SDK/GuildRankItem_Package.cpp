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
	 * 		Name   -> Function GuildRankItem.GuildRankItem_C.SetRankUnlockData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildRankUnlockMaster                      UnlockData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildRankItem_C::SetRankUnlockData(const struct FGuildRankUnlockMaster& UnlockData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRankItem.GuildRankItem_C.SetRankUnlockData");
		
		UGuildRankItem_C_SetRankUnlockData_Params params {};
		params.UnlockData = UnlockData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRankItem.GuildRankItem_C.ExecuteUbergraph_GuildRankItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRankItem_C::ExecuteUbergraph_GuildRankItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRankItem.GuildRankItem_C.ExecuteUbergraph_GuildRankItem");
		
		UGuildRankItem_C_ExecuteUbergraph_GuildRankItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildRankItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildRankItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildRankItem.GuildRankItem_C");
		return ptr;
	}

}


