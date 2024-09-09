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
	 * 		Name   -> Function GuildNpcSelectMode.GuildNpcSelectMode_C.SetBannerText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        BannerText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildNpcSelectMode_C::SetBannerText(const class FText& BannerText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildNpcSelectMode.GuildNpcSelectMode_C.SetBannerText");
		
		UGuildNpcSelectMode_C_SetBannerText_Params params {};
		params.BannerText = BannerText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildNpcSelectMode.GuildNpcSelectMode_C.RefreshBannerText
	 * 		Flags  -> ()
	 */
	void UGuildNpcSelectMode_C::RefreshBannerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildNpcSelectMode.GuildNpcSelectMode_C.RefreshBannerText");
		
		UGuildNpcSelectMode_C_RefreshBannerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildNpcSelectMode.GuildNpcSelectMode_C.ExecuteUbergraph_GuildNpcSelectMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildNpcSelectMode_C::ExecuteUbergraph_GuildNpcSelectMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildNpcSelectMode.GuildNpcSelectMode_C.ExecuteUbergraph_GuildNpcSelectMode");
		
		UGuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildNpcSelectMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildNpcSelectMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildNpcSelectMode.GuildNpcSelectMode_C");
		return ptr;
	}

}


