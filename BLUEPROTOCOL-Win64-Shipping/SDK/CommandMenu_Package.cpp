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
	 * 		Name   -> Function CommandMenu.CommandMenu_C.CheckReadDemoIdList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCommandMenu_C::CheckReadDemoIdList(TArray<class FName>* In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.CheckReadDemoIdList");
		
		UCommandMenu_C_CheckReadDemoIdList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.SetSkyShopBtn
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::SetSkyShopBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.SetSkyShopBtn");
		
		UCommandMenu_C_SetSkyShopBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.SetIsEnabledBtnSkyStore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::SetIsEnabledBtnSkyStore(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.SetIsEnabledBtnSkyStore");
		
		UCommandMenu_C_SetIsEnabledBtnSkyStore_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnCancelMatch
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnCancelMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnCancelMatch");
		
		UCommandMenu_C_OnCancelMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnFailedMatch
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnFailedMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnFailedMatch");
		
		UCommandMenu_C_OnFailedMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnMatchedGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBMatchingGameState*                        MatchedGame                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::OnMatchedGame(class USBMatchingGameState* MatchedGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnMatchedGame");
		
		UCommandMenu_C_OnMatchedGame_Params params {};
		params.MatchedGame = MatchedGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UpdateQuestButton
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UpdateQuestButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UpdateQuestButton");
		
		UCommandMenu_C_UpdateQuestButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Update Button Inventory
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UpdateButtonInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Update Button Inventory");
		
		UCommandMenu_C_UpdateButtonInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.CommandMenu_AutoGenFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ApprovalMax                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bNoOverride                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FContactListData>                    ItemListData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::CommandMenu_AutoGenFunc(bool bWasSuccessful, int32_t ApprovalMax, bool bNoOverride, TArray<struct FContactListData> ItemListData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.CommandMenu_AutoGenFunc");
		
		UCommandMenu_C_CommandMenu_AutoGenFunc_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ApprovalMax = ApprovalMax;
		params.bNoOverride = bNoOverride;
		params.ItemListData = ItemListData;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UnbindConsent
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UnbindConsent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UnbindConsent");
		
		UCommandMenu_C_UnbindConsent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UpdateConsent
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UpdateConsent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UpdateConsent");
		
		UCommandMenu_C_UpdateConsent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.SetCmnBackBtnVIsibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::SetCmnBackBtnVIsibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.SetCmnBackBtnVIsibility");
		
		UCommandMenu_C_SetCmnBackBtnVIsibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UpdateMatchingMenuButtonExclamation
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UpdateMatchingMenuButtonExclamation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UpdateMatchingMenuButtonExclamation");
		
		UCommandMenu_C_UpdateMatchingMenuButtonExclamation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UpdateGuildButtonExclamation
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UpdateGuildButtonExclamation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UpdateGuildButtonExclamation");
		
		UCommandMenu_C_UpdateGuildButtonExclamation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UCommandMenu_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.GetGuildComp");
		
		UCommandMenu_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UpdateGuildButton
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UpdateGuildButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UpdateGuildButton");
		
		UCommandMenu_C_UpdateGuildButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.GetIsRmShopDisplayed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsRmShopOpen                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::GetIsRmShopDisplayed(bool* OutIsRmShopOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.GetIsRmShopDisplayed");
		
		UCommandMenu_C_GetIsRmShopDisplayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsRmShopOpen != nullptr)
			*OutIsRmShopOpen = params.OutIsRmShopOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UpdateLetterButton
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UpdateLetterButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UpdateLetterButton");
		
		UCommandMenu_C_UpdateLetterButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UpdateSeasonPassMenuButton
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UpdateSeasonPassMenuButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UpdateSeasonPassMenuButton");
		
		UCommandMenu_C_UpdateSeasonPassMenuButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.TsCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::TsCheck(const class FString& InputPin, bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.TsCheck");
		
		UCommandMenu_C_TsCheck_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Get Now Page
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NowBookMarkType                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::GetNowPage(class FString* NowBookMarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Get Now Page");
		
		UCommandMenu_C_GetNowPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NowBookMarkType != nullptr)
			*NowBookMarkType = params.NowBookMarkType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.IsBookmarkType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigAction                                 Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bBookmark                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::IsBookmarkType(ESBKeyConfigAction Index, bool* bBookmark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.IsBookmarkType");
		
		UCommandMenu_C_IsBookmarkType_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bBookmark != nullptr)
			*bBookmark = params.bBookmark;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.GetBookmarkType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigAction                                 Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UCommandMenu_C::GetBookmarkType(ESBKeyConfigAction Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.GetBookmarkType");
		
		UCommandMenu_C_GetBookmarkType_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.GetCommondMenuType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigAction                                 Action                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESBCommandMenuType UCommandMenu_C::GetCommondMenuType(ESBKeyConfigAction Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.GetCommondMenuType");
		
		UCommandMenu_C_GetCommondMenuType_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Create Child Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBCommandMenuChildBase*                     CreateChildWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::CreateChildMenu(class UClass* Class, class USBCommandMenuChildBase** CreateChildWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Create Child Menu");
		
		UCommandMenu_C_CreateChildMenu_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CreateChildWidget != nullptr)
			*CreateChildWidget = params.CreateChildWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Update Library New Icon
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UpdateLibraryNewIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Update Library New Icon");
		
		UCommandMenu_C_UpdateLibraryNewIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.SetActiveMenuButtonAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 ActiveMenuType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::SetActiveMenuButtonAnim(ESBCommandMenuType ActiveMenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.SetActiveMenuButtonAnim");
		
		UCommandMenu_C_SetActiveMenuButtonAnim_Params params {};
		params.ActiveMenuType = ActiveMenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.DisableMenuButtons
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::DisableMenuButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.DisableMenuButtons");
		
		UCommandMenu_C_DisableMenuButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.GetFirstMenuType_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 MenuType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::GetFirstMenuType_Internal(ESBCommandMenuType* MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.GetFirstMenuType_Internal");
		
		UCommandMenu_C_GetFirstMenuType_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuType != nullptr)
			*MenuType = params.MenuType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.IsEnableMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 InMenuType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bEnable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::IsEnableMenu(ESBCommandMenuType InMenuType, bool* bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.IsEnableMenu");
		
		UCommandMenu_C_IsEnableMenu_Params params {};
		params.InMenuType = InMenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bEnable != nullptr)
			*bEnable = params.bEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.RequestDirectChat
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::RequestDirectChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.RequestDirectChat");
		
		UCommandMenu_C_RequestDirectChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Add BGGroup Contents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::AddBGGroupContents(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Add BGGroup Contents");
		
		UCommandMenu_C_AddBGGroupContents_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.IsRememberMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 InMenuType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRet                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::IsRememberMenu(ESBCommandMenuType InMenuType, bool* bRet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.IsRememberMenu");
		
		UCommandMenu_C_IsRememberMenu_Params params {};
		params.InMenuType = InMenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRet != nullptr)
			*bRet = params.bRet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.GetFirstMenuType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 MenuType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::GetFirstMenuType(ESBCommandMenuType* MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.GetFirstMenuType");
		
		UCommandMenu_C_GetFirstMenuType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuType != nullptr)
			*MenuType = params.MenuType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.SetActiveMenuButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 ActiveMenuType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::SetActiveMenuButton(ESBCommandMenuType ActiveMenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.SetActiveMenuButton");
		
		UCommandMenu_C_SetActiveMenuButton_Params params {};
		params.ActiveMenuType = ActiveMenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.CollectMenuButton
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::CollectMenuButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.CollectMenuButton");
		
		UCommandMenu_C_CollectMenuButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnLoaded_A56FA3C649A13B2523A4D78B50954D35
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::OnLoaded_A56FA3C649A13B2523A4D78B50954D35(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnLoaded_A56FA3C649A13B2523A4D78B50954D35");
		
		UCommandMenu_C_OnLoaded_A56FA3C649A13B2523A4D78B50954D35_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnLoaded_6ACEB693478345863D5B688D8FC8E59D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::OnLoaded_6ACEB693478345863D5B688D8FC8E59D(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnLoaded_6ACEB693478345863D5B688D8FC8E59D");
		
		UCommandMenu_C_OnLoaded_6ACEB693478345863D5B688D8FC8E59D_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnLoaded_AE38282A462780609F3445B36A750DC5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::OnLoaded_AE38282A462780609F3445B36A750DC5(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnLoaded_AE38282A462780609F3445B36A750DC5");
		
		UCommandMenu_C_OnLoaded_AE38282A462780609F3445B36A750DC5_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Event_OpenCommandMenu
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::Event_OpenCommandMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Event_OpenCommandMenu");
		
		UCommandMenu_C_Event_OpenCommandMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Event_CloseCommandMenu
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::Event_CloseCommandMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Event_CloseCommandMenu");
		
		UCommandMenu_C_Event_CloseCommandMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnPress_QuickAccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigAction                                 QuickAccess                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::OnPress_QuickAccess(ESBKeyConfigAction QuickAccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnPress_QuickAccess");
		
		UCommandMenu_C_OnPress_QuickAccess_Params params {};
		params.QuickAccess = QuickAccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.StartQuickAccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 InMenuType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::StartQuickAccess(ESBCommandMenuType InMenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.StartQuickAccess");
		
		UCommandMenu_C_StartQuickAccess_Params params {};
		params.InMenuType = InMenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.TransitionMenuFromSubMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 InMenuType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InBookMarkType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        InParamName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::TransitionMenuFromSubMenu(ESBCommandMenuType InMenuType, const class FString& InBookMarkType, const class FName& InParamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.TransitionMenuFromSubMenu");
		
		UCommandMenu_C_TransitionMenuFromSubMenu_Params params {};
		params.InMenuType = InMenuType;
		params.InBookMarkType = InBookMarkType;
		params.InParamName = InParamName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BookmarkProcessing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BookmarkType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BookmarkProcessing(const class FString& BookmarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BookmarkProcessing");
		
		UCommandMenu_C_BookmarkProcessing_Params params {};
		params.BookmarkType = BookmarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::CustomEvent_2(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.CustomEvent_2");
		
		UCommandMenu_C_CustomEvent_2_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBBookMarkerSlot                                  BookmarkSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      KeyString                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::CustomEvent_3(ESBBookMarkerSlot BookmarkSlot, const class FString& KeyString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.CustomEvent_3");
		
		UCommandMenu_C_CustomEvent_3_Params params {};
		params.BookmarkSlot = BookmarkSlot;
		params.KeyString = KeyString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BookmarkRegistration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BookmarkType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BookmarkRegistration(const class FString& BookmarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BookmarkRegistration");
		
		UCommandMenu_C_BookmarkRegistration_Params params {};
		params.BookmarkType = BookmarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BookmarkDelete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BookmarkDelete(const class FString& InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BookmarkDelete");
		
		UCommandMenu_C_BookmarkDelete_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.CustomEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::CustomEvent_4(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.CustomEvent_4");
		
		UCommandMenu_C_CustomEvent_4_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BookmarkUpdateRequest
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BookmarkUpdateRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BookmarkUpdateRequest");
		
		UCommandMenu_C_BookmarkUpdateRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BookmarkUpdate
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BookmarkUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BookmarkUpdate");
		
		UCommandMenu_C_BookmarkUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.RequestTransitionMenuNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      BookmarkType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        InParamName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::RequestTransitionMenuNew(ESBCommandMenuType MenuType, const class FString& BookmarkType, const class FName& InParamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.RequestTransitionMenuNew");
		
		UCommandMenu_C_RequestTransitionMenuNew_Params params {};
		params.MenuType = MenuType;
		params.BookmarkType = BookmarkType;
		params.InParamName = InParamName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Destruct");
		
		UCommandMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Construct");
		
		UCommandMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.CustomEvent_1");
		
		UCommandMenu_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnUnreadUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UnreadCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::OnUnreadUpdate(bool bWasSuccessful, int32_t ErrorCode, int32_t UnreadCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnUnreadUpdate");
		
		UCommandMenu_C_OnUnreadUpdate_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ErrorCode = ErrorCode;
		params.UnreadCount = UnreadCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UnbindUpdatedUnreadCount
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UnbindUpdatedUnreadCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UnbindUpdatedUnreadCount");
		
		UCommandMenu_C_UnbindUpdatedUnreadCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BindUpdatedUnreadCount
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BindUpdatedUnreadCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BindUpdatedUnreadCount");
		
		UCommandMenu_C_BindUpdatedUnreadCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnRequestTermCommandMenuDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::OnRequestTermCommandMenuDelegate_Event_1(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnRequestTermCommandMenuDelegate_Event_1");
		
		UCommandMenu_C_OnRequestTermCommandMenuDelegate_Event_1_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UnbindOnRequestTermCommandMenuDelegate
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UnbindOnRequestTermCommandMenuDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UnbindOnRequestTermCommandMenuDelegate");
		
		UCommandMenu_C_UnbindOnRequestTermCommandMenuDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BindOnRequestTermCommandMenuDelegate
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BindOnRequestTermCommandMenuDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BindOnRequestTermCommandMenuDelegate");
		
		UCommandMenu_C_BindOnRequestTermCommandMenuDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.DemoPlayStartDelegate_Event_1
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::DemoPlayStartDelegate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.DemoPlayStartDelegate_Event_1");
		
		UCommandMenu_C_DemoPlayStartDelegate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UnbindDemoPlayStartDelegate
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UnbindDemoPlayStartDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UnbindDemoPlayStartDelegate");
		
		UCommandMenu_C_UnbindDemoPlayStartDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BindDemoPlayStartDelegate
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BindDemoPlayStartDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BindDemoPlayStartDelegate");
		
		UCommandMenu_C_BindDemoPlayStartDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UnbindGameOverDelegate
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UnbindGameOverDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UnbindGameOverDelegate");
		
		UCommandMenu_C_UnbindGameOverDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UnbindOnDeathDelegate
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UnbindOnDeathDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UnbindOnDeathDelegate");
		
		UCommandMenu_C_UnbindOnDeathDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.QuitCommandMenuDelegate
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::QuitCommandMenuDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.QuitCommandMenuDelegate");
		
		UCommandMenu_C_QuitCommandMenuDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UnbindDungeonClearDelegate
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UnbindDungeonClearDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UnbindDungeonClearDelegate");
		
		UCommandMenu_C_UnbindDungeonClearDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BindOnDeathDelegate
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BindOnDeathDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BindOnDeathDelegate");
		
		UCommandMenu_C_BindOnDeathDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BindGameOverDelegate
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BindGameOverDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BindGameOverDelegate");
		
		UCommandMenu_C_BindGameOverDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BindDungeonClearDelegate
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BindDungeonClearDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BindDungeonClearDelegate");
		
		UCommandMenu_C_BindDungeonClearDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BindUpdateItemNew
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BindUpdateItemNew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BindUpdateItemNew");
		
		UCommandMenu_C_BindUpdateItemNew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.CustomEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::CustomEvent_5(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.CustomEvent_5");
		
		UCommandMenu_C_CustomEvent_5_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UnbindUpdateItemNew
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UnbindUpdateItemNew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UnbindUpdateItemNew");
		
		UCommandMenu_C_UnbindUpdateItemNew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BindUpdateQuestButtonNew
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BindUpdateQuestButtonNew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BindUpdateQuestButtonNew");
		
		UCommandMenu_C_BindUpdateQuestButtonNew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.カスタムイベント_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::_4(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.カスタムイベント_4");
		
		UCommandMenu_C__4_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Event_OnCompleteCommandMenuGetDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::Event_OnCompleteCommandMenuGetDelegate(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Event_OnCompleteCommandMenuGetDelegate");
		
		UCommandMenu_C_Event_OnCompleteCommandMenuGetDelegate_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BindUpdateMatchingMenuButtonNew
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BindUpdateMatchingMenuButtonNew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BindUpdateMatchingMenuButtonNew");
		
		UCommandMenu_C_BindUpdateMatchingMenuButtonNew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnUpdateMatchingMenuButtonNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::OnUpdateMatchingMenuButtonNew(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnUpdateMatchingMenuButtonNew");
		
		UCommandMenu_C_OnUpdateMatchingMenuButtonNew_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.CustomEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::CustomEvent_6(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.CustomEvent_6");
		
		UCommandMenu_C_CustomEvent_6_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.CustomEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::CustomEvent_7(bool Result, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.CustomEvent_7");
		
		UCommandMenu_C_CustomEvent_7_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.TryAchievementDataLoad
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::TryAchievementDataLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.TryAchievementDataLoad");
		
		UCommandMenu_C_TryAchievementDataLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.ExitGame
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::ExitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.ExitGame");
		
		UCommandMenu_C_ExitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.StartExitGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               QuitFlag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            DlalogMsgID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::StartExitGame(bool QuitFlag, int32_t DlalogMsgID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.StartExitGame");
		
		UCommandMenu_C_StartExitGame_Params params {};
		params.QuitFlag = QuitFlag;
		params.DlalogMsgID = DlalogMsgID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnHide_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::OnHide_Event_1(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnHide_Event_1");
		
		UCommandMenu_C_OnHide_Event_1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.ExitGame_TermMenu
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::ExitGame_TermMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.ExitGame_TermMenu");
		
		UCommandMenu_C_ExitGame_TermMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Term
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::Term()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Term");
		
		UCommandMenu_C_Term_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.TryTerm
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::TryTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.TryTerm");
		
		UCommandMenu_C_TryTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.ForceTerm
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::ForceTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.ForceTerm");
		
		UCommandMenu_C_ForceTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.CallTryTerm
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::CallTryTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.CallTryTerm");
		
		UCommandMenu_C_CallTryTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommandMenu_MenuItem_C*                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature");
		
		UCommandMenu_C_BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommandMenu_MenuItem_C*                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature");
		
		UCommandMenu_C_BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommandMenu_MenuItem_C*                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature");
		
		UCommandMenu_C_BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommandMenu_MenuItem_C*                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature");
		
		UCommandMenu_C_BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.TryStartChildMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 InMenuType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InParamName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::TryStartChildMenu(ESBCommandMenuType InMenuType, const class FName& InParamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.TryStartChildMenu");
		
		UCommandMenu_C_TryStartChildMenu_Params params {};
		params.InMenuType = InMenuType;
		params.InParamName = InParamName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.StartChildMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 InMenuType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsStartup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               First                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::StartChildMenu(ESBCommandMenuType InMenuType, bool bIsStartup, bool First)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.StartChildMenu");
		
		UCommandMenu_C_StartChildMenu_Params params {};
		params.InMenuType = InMenuType;
		params.bIsStartup = bIsStartup;
		params.First = First;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommandMenu_MenuItem_C*                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature");
		
		UCommandMenu_C_BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature(ESBCommandMenuType MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature");
		
		UCommandMenu_C_BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature_Params params {};
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature(ESBCommandMenuType MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature");
		
		UCommandMenu_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature_Params params {};
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_28_OnOpenMatchingMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_28_OnOpenMatchingMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_28_OnOpenMatchingMenu__DelegateSignature");
		
		UCommandMenu_C_BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_28_OnOpenMatchingMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnOpenDungeonMatchingMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnOpenDungeonMatchingMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnOpenDungeonMatchingMenu__DelegateSignature");
		
		UCommandMenu_C_BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnOpenDungeonMatchingMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.ResetMouseCursorTypeToDefault
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::ResetMouseCursorTypeToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.ResetMouseCursorTypeToDefault");
		
		UCommandMenu_C_ResetMouseCursorTypeToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommandMenu_MenuItem_C*                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature");
		
		UCommandMenu_C_BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnStartOption
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnStartOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnStartOption");
		
		UCommandMenu_C_OnStartOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UpdateUnreadMark
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UpdateUnreadMark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UpdateUnreadMark");
		
		UCommandMenu_C_UpdateUnreadMark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature(ESBCommandMenuType MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature");
		
		UCommandMenu_C_BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature_Params params {};
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__GuildMenuButton_K2Node_ComponentBoundEvent_0_OpenGuildMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BndEvt__GuildMenuButton_K2Node_ComponentBoundEvent_0_OpenGuildMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__GuildMenuButton_K2Node_ComponentBoundEvent_0_OpenGuildMenu__DelegateSignature");
		
		UCommandMenu_C_BndEvt__GuildMenuButton_K2Node_ComponentBoundEvent_0_OpenGuildMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.RequestUpdateLibraryNewIcon
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::RequestUpdateLibraryNewIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.RequestUpdateLibraryNewIcon");
		
		UCommandMenu_C_RequestUpdateLibraryNewIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnCloseOptionMenu
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnCloseOptionMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnCloseOptionMenu");
		
		UCommandMenu_C_OnCloseOptionMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommandMenu_MenuItem_C*                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature");
		
		UCommandMenu_C_BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.DisplayRmShop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  StartUpShopType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::DisplayRmShop(ESBRmShopMenuType StartUpShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.DisplayRmShop");
		
		UCommandMenu_C_DisplayRmShop_Params params {};
		params.StartUpShopType = StartUpShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnCommandMenuVisible_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::OnCommandMenuVisible_Event_1(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnCommandMenuVisible_Event_1");
		
		UCommandMenu_C_OnCommandMenuVisible_Event_1_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnUpdateSeasonPassAnyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::OnUpdateSeasonPassAnyInfo(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnUpdateSeasonPassAnyInfo");
		
		UCommandMenu_C_OnUpdateSeasonPassAnyInfo_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommandMenu_MenuItem_C*                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature");
		
		UCommandMenu_C_BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnCloseRmShopMenuEvent
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnCloseRmShopMenuEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnCloseRmShopMenuEvent");
		
		UCommandMenu_C_OnCloseRmShopMenuEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_BtnSkyStore_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BndEvt__CommandMenu_BtnSkyStore_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_BtnSkyStore_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UCommandMenu_C_BndEvt__CommandMenu_BtnSkyStore_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Event_OnCompletedGetEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::Event_OnCompletedGetEntries(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Event_OnCompletedGetEntries");
		
		UCommandMenu_C_Event_OnCompletedGetEntries_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Event_OnCompletedGetInviteList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::Event_OnCompletedGetInviteList(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Event_OnCompletedGetInviteList");
		
		UCommandMenu_C_Event_OnCompletedGetInviteList_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Event_OnCompletedWithDraw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::Event_OnCompletedWithDraw(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Event_OnCompletedWithDraw");
		
		UCommandMenu_C_Event_OnCompletedWithDraw_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Event_OnCompletedGGetEntryList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::Event_OnCompletedGGetEntryList(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Event_OnCompletedGGetEntryList");
		
		UCommandMenu_C_Event_OnCompletedGGetEntryList_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Event_OnCompletedInviteArraignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isAccept                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InEntryId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::Event_OnCompletedInviteArraignment(int32_t RetCode, bool isAccept, const class FString& InEntryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Event_OnCompletedInviteArraignment");
		
		UCommandMenu_C_Event_OnCompletedInviteArraignment_Params params {};
		params.RetCode = RetCode;
		params.isAccept = isAccept;
		params.InEntryId = InEntryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Event_OnCompletedCancelEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::Event_OnCompletedCancelEntry(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Event_OnCompletedCancelEntry");
		
		UCommandMenu_C_Event_OnCompletedCancelEntry_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnIsCmnBackBtnVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsVisible                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::OnIsCmnBackBtnVisible(bool bInIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnIsCmnBackBtnVisible");
		
		UCommandMenu_C_OnIsCmnBackBtnVisible_Params params {};
		params.bInIsVisible = bInIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.ForceCloseRmShop
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::ForceCloseRmShop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.ForceCloseRmShop");
		
		UCommandMenu_C_ForceCloseRmShop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.Event_OnCompletedGuildAddedNewMember
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::Event_OnCompletedGuildAddedNewMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.Event_OnCompletedGuildAddedNewMember");
		
		UCommandMenu_C_Event_OnCompletedGuildAddedNewMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature(bool IsStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature");
		
		UCommandMenu_C_BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature_Params params {};
		params.IsStart = IsStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnDelegateMails
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnDelegateMails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnDelegateMails");
		
		UCommandMenu_C_OnDelegateMails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnMailDelegateEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsAleat                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_C::OnMailDelegateEvents(bool bIsAleat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnMailDelegateEvents");
		
		UCommandMenu_C_OnMailDelegateEvents_Params params {};
		params.bIsAleat = bIsAleat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BindMailComponent
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BindMailComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BindMailComponent");
		
		UCommandMenu_C_BindMailComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.UnbindMailComponent
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::UnbindMailComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.UnbindMailComponent");
		
		UCommandMenu_C_UnbindMailComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_PartyMenuButton_K2Node_ComponentBoundEvent_7_OnOpenPartyMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BndEvt__CommandMenu_PartyMenuButton_K2Node_ComponentBoundEvent_7_OnOpenPartyMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_PartyMenuButton_K2Node_ComponentBoundEvent_7_OnOpenPartyMenu__DelegateSignature");
		
		UCommandMenu_C_BndEvt__CommandMenu_PartyMenuButton_K2Node_ComponentBoundEvent_7_OnOpenPartyMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnPress_MainMenu
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnPress_MainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnPress_MainMenu");
		
		UCommandMenu_C_OnPress_MainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnAnimationFinished");
		
		UCommandMenu_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnPress_Cancel");
		
		UCommandMenu_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnSubMenuTermReady
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnSubMenuTermReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnSubMenuTermReady");
		
		UCommandMenu_C_OnSubMenuTermReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnRequestDirectChat
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnRequestDirectChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnRequestDirectChat");
		
		UCommandMenu_C_OnRequestDirectChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UCommandMenu_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");
		
		UCommandMenu_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnAddBgGroupContents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::OnAddBgGroupContents(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnAddBgGroupContents");
		
		UCommandMenu_C_OnAddBgGroupContents_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.ExecuteUbergraph_CommandMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_C::ExecuteUbergraph_CommandMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.ExecuteUbergraph_CommandMenu");
		
		UCommandMenu_C_ExecuteUbergraph_CommandMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnFinishCreateChildWidget__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnFinishCreateChildWidget__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnFinishCreateChildWidget__DelegateSignature");
		
		UCommandMenu_C_OnFinishCreateChildWidget__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnTerm__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnTerm__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnTerm__DelegateSignature");
		
		UCommandMenu_C_OnTerm__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu.CommandMenu_C.OnTermed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_C::OnTermed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu.CommandMenu_C.OnTermed__DelegateSignature");
		
		UCommandMenu_C_OnTermed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommandMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommandMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommandMenu.CommandMenu_C");
		return ptr;
	}

}


