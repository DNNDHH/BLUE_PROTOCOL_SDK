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
	 * 		Name   -> Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.IsWishListExclamation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_FunctionLibrary_C::IsWishListExclamation(class UObject* __WorldContext, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.IsWishListExclamation");
		
		UCommandMenu_FunctionLibrary_C_IsWishListExclamation_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.IsWishItemCollectionCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRequiredMaterialInfo>               RequiredMaterialInfo                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCompleted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_FunctionLibrary_C::IsWishItemCollectionCompleted(TArray<struct FRequiredMaterialInfo>* RequiredMaterialInfo, class UObject* __WorldContext, bool* bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.IsWishItemCollectionCompleted");
		
		UCommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequiredMaterialInfo != nullptr)
			*RequiredMaterialInfo = params.RequiredMaterialInfo;
		if (bCompleted != nullptr)
			*bCompleted = params.bCompleted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.CheckBookmarkID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBookmarkID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ReplacementID                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_FunctionLibrary_C::CheckBookmarkID(const class FString& InBookmarkID, class UObject* __WorldContext, bool* IsActive, class FString* ReplacementID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.CheckBookmarkID");
		
		UCommandMenu_FunctionLibrary_C_CheckBookmarkID_Params params {};
		params.InBookmarkID = InBookmarkID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
		if (ReplacementID != nullptr)
			*ReplacementID = params.ReplacementID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.Is Adventure Rank Board Enable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               enable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_FunctionLibrary_C::IsAdventureRankBoardEnable(class UObject* __WorldContext, bool* enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.Is Adventure Rank Board Enable");
		
		UCommandMenu_FunctionLibrary_C_IsAdventureRankBoardEnable_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (enable != nullptr)
			*enable = params.enable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.IsLoginBonusBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               enable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_FunctionLibrary_C::IsLoginBonusBtnEnable(class UObject* __WorldContext, bool* enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.IsLoginBonusBtnEnable");
		
		UCommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (enable != nullptr)
			*enable = params.enable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.OpenTutorialHelp_CommandMenu_By HelpId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TutorialHelpId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_FunctionLibrary_C::OpenTutorialHelp_CommandMenu_ByHelpId(const class FName& TutorialHelpId, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.OpenTutorialHelp_CommandMenu_By HelpId");
		
		UCommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_ByHelpId_Params params {};
		params.TutorialHelpId = TutorialHelpId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.GetTutorialHelpText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBTextTableAsset*                           InTextTableAsset                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InTextId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UCommandMenu_FunctionLibrary_C::GetTutorialHelpText(class USBTextTableAsset* InTextTableAsset, const class FName& InTextId, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.GetTutorialHelpText");
		
		UCommandMenu_FunctionLibrary_C_GetTutorialHelpText_Params params {};
		params.InTextTableAsset = InTextTableAsset;
		params.InTextId = InTextId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.KeyconfigActionToBookmark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigAction                                 QuickAccessKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ReturnValue1                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_FunctionLibrary_C::KeyconfigActionToBookmark(ESBKeyConfigAction QuickAccessKey, class UObject* __WorldContext, class FString* ReturnValue1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.KeyconfigActionToBookmark");
		
		UCommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark_Params params {};
		params.QuickAccessKey = QuickAccessKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue1 != nullptr)
			*ReturnValue1 = params.ReturnValue1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.GetGuildComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class USBPlayerGuildComponent* UCommandMenu_FunctionLibrary_C::GetGuildComp(class UObject* __WorldContext, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.GetGuildComp");
		
		UCommandMenu_FunctionLibrary_C_GetGuildComp_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.BookmarkTypeToRmShopMenuType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBRmShopMenuType                                  Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_FunctionLibrary_C::BookmarkTypeToRmShopMenuType(const class FString& Key, class UObject* __WorldContext, ESBRmShopMenuType* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.BookmarkTypeToRmShopMenuType");
		
		UCommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.InitTutorialHelp_CommandMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InMustDisplayed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UTutorialHelpDialogBox_C* UCommandMenu_FunctionLibrary_C::InitTutorialHelp_CommandMenu(const class FName& InId, bool InMustDisplayed, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.InitTutorialHelp_CommandMenu");
		
		UCommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu_Params params {};
		params.InId = InId;
		params.InMustDisplayed = InMustDisplayed;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.OpenTutorialHelp_CommandMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UTutorialHelpDialogBox_C* UCommandMenu_FunctionLibrary_C::OpenTutorialHelp_CommandMenu(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.OpenTutorialHelp_CommandMenu");
		
		UCommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommandMenu_FunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommandMenu_FunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C");
		return ptr;
	}

}


