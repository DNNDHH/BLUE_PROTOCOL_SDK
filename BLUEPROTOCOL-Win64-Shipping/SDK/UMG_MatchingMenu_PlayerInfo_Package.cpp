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
	 * 		Name   -> Function UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C.DownLoadFaceImage_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ImageUrl                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_PlayerInfo_C::DownLoadFaceImage_Event(const class FString& ImageUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C.DownLoadFaceImage_Event");
		
		UUMG_MatchingMenu_PlayerInfo_C_DownLoadFaceImage_Event_Params params {};
		params.ImageUrl = ImageUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_PlayerInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C.Construct");
		
		UUMG_MatchingMenu_PlayerInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C.ExecuteUbergraph_UMG_MatchingMenu_PlayerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_PlayerInfo_C::ExecuteUbergraph_UMG_MatchingMenu_PlayerInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C.ExecuteUbergraph_UMG_MatchingMenu_PlayerInfo");
		
		UUMG_MatchingMenu_PlayerInfo_C_ExecuteUbergraph_UMG_MatchingMenu_PlayerInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingMenu_PlayerInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingMenu_PlayerInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C");
		return ptr;
	}

}


