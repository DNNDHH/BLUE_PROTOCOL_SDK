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
	 * 		Name   -> Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.WarpPlayerByMapClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   WorldLocation2d                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAdminComponent_C::WarpPlayerByMapClick(const struct FVector2D& WorldLocation2d)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.WarpPlayerByMapClick");
		
		UBP_PlayerAdminComponent_C_WarpPlayerByMapClick_Params params {};
		params.WorldLocation2d = WorldLocation2d;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnConfirmAdminWarp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAdminComponent_C::OnConfirmAdminWarp(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnConfirmAdminWarp");
		
		UBP_PlayerAdminComponent_C_OnConfirmAdminWarp_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnIsGetPlayerProfileDetailMenuDataDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAdminComponent_C::OnIsGetPlayerProfileDetailMenuDataDelegate_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnIsGetPlayerProfileDetailMenuDataDelegate_Event");
		
		UBP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.PlayerProfileDetailMenuData = PlayerProfileDetailMenuData;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OutputFoundPlayerInfoByScreenClick
	 * 		Flags  -> ()
	 */
	void UBP_PlayerAdminComponent_C::OutputFoundPlayerInfoByScreenClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OutputFoundPlayerInfoByScreenClick");
		
		UBP_PlayerAdminComponent_C_OutputFoundPlayerInfoByScreenClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OutputFoundPlayerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAdminComponent_C::OutputFoundPlayerInfo(const class FString& CharacterId, const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OutputFoundPlayerInfo");
		
		UBP_PlayerAdminComponent_C_OutputFoundPlayerInfo_Params params {};
		params.CharacterId = CharacterId;
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.TravelMapToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAdminComponent_C::TravelMapToCharacter(const class FString& CharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.TravelMapToCharacter");
		
		UBP_PlayerAdminComponent_C_TravelMapToCharacter_Params params {};
		params.CharacterId = CharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.SearchPlayerProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAdminComponent_C::SearchPlayerProfile(const class FString& CharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.SearchPlayerProfile");
		
		UBP_PlayerAdminComponent_C_SearchPlayerProfile_Params params {};
		params.CharacterId = CharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.ExecuteGotoBookmarkSub
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBAdminGotoBookmarkItem*                    BookmarkData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAdminComponent_C::ExecuteGotoBookmarkSub(class USBAdminGotoBookmarkItem* BookmarkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.ExecuteGotoBookmarkSub");
		
		UBP_PlayerAdminComponent_C_ExecuteGotoBookmarkSub_Params params {};
		params.BookmarkData = BookmarkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnCanfirmGotoBookmarkMapJamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAdminComponent_C::OnCanfirmGotoBookmarkMapJamp(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnCanfirmGotoBookmarkMapJamp");
		
		UBP_PlayerAdminComponent_C_OnCanfirmGotoBookmarkMapJamp_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.ExecuteUbergraph_BP_PlayerAdminComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerAdminComponent_C::ExecuteUbergraph_BP_PlayerAdminComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.ExecuteUbergraph_BP_PlayerAdminComponent");
		
		UBP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerAdminComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerAdminComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerAdminComponent.BP_PlayerAdminComponent_C");
		return ptr;
	}

}


