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
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.TermRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubMenuTermReason                                 InReason                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESubMenuTermRequestReply ULibraryMenu_C::TermRequest(ESubMenuTermReason InReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.TermRequest");
		
		ULibraryMenu_C_TermRequest_Params params {};
		params.InReason = InReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.CheckReadDemoIdList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULibraryMenu_C::CheckReadDemoIdList(TArray<class FName>* In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.CheckReadDemoIdList");
		
		ULibraryMenu_C_CheckReadDemoIdList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.Setup Library Button Excrametion
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::SetupLibraryButtonExcrametion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.Setup Library Button Excrametion");
		
		ULibraryMenu_C_SetupLibraryButtonExcrametion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.GetCharacterAchievementData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBAchievementInfo                          Output                                                     (Parm, OutParm, NoDestructor)
	 */
	void ULibraryMenu_C::GetCharacterAchievementData(int32_t InputPin, struct FSBAchievementInfo* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.GetCharacterAchievementData");
		
		ULibraryMenu_C_GetCharacterAchievementData_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.SetupSelectedSubMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::SetupSelectedSubMenu(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.SetupSelectedSubMenu");
		
		ULibraryMenu_C_SetupSelectedSubMenu_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.BookmarkTypeToMenueType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	ELibraryMenuType ULibraryMenu_C::BookmarkTypeToMenueType(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.BookmarkTypeToMenueType");
		
		ULibraryMenu_C_BookmarkTypeToMenueType_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.Set Title And Help Text Id
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELibraryMenuType                                   InSelectedMenuType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::SetTitleAndHelpTextId(ELibraryMenuType InSelectedMenuType, int32_t InSubIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.Set Title And Help Text Id");
		
		ULibraryMenu_C_SetTitleAndHelpTextId_Params params {};
		params.InSelectedMenuType = InSelectedMenuType;
		params.InSubIndex = InSubIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.RefleshNewIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::RefleshNewIcon(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.RefleshNewIcon");
		
		ULibraryMenu_C_RefleshNewIcon_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.SetupTheaterButtonExcrametion
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::SetupTheaterButtonExcrametion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.SetupTheaterButtonExcrametion");
		
		ULibraryMenu_C_SetupTheaterButtonExcrametion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.SetupAchievementButtonExcrametion
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::SetupAchievementButtonExcrametion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.SetupAchievementButtonExcrametion");
		
		ULibraryMenu_C_SetupAchievementButtonExcrametion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.SetupMenuButtonExcrametion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::SetupMenuButtonExcrametion(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.SetupMenuButtonExcrametion");
		
		ULibraryMenu_C_SetupMenuButtonExcrametion_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.Setup Selected Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELibraryMenuType                                   InSelectedMenuType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::SetupSelectedMenu(ELibraryMenuType InSelectedMenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.Setup Selected Menu");
		
		ULibraryMenu_C_SetupSelectedMenu_Params params {};
		params.InSelectedMenuType = InSelectedMenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.GetIdListCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBLibraryPictureBookType                          Type                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::GetIdListCallback(bool WasSuccessful, int32_t RetCode, ESBLibraryPictureBookType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.GetIdListCallback");
		
		ULibraryMenu_C_GetIdListCallback_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.RetCode = RetCode;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.OnParentTerm
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::OnParentTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.OnParentTerm");
		
		ULibraryMenu_C_OnParentTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.OnRMShopClosed
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::OnRMShopClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.OnRMShopClosed");
		
		ULibraryMenu_C_OnRMShopClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.OnSubMenuUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MainPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::OnSubMenuUpdate(int32_t MainPage, int32_t SubPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.OnSubMenuUpdate");
		
		ULibraryMenu_C_OnSubMenuUpdate_Params params {};
		params.MainPage = MainPage;
		params.SubPage = SubPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.ResetMouseCursorTypeToDefaultRequest
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::ResetMouseCursorTypeToDefaultRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.ResetMouseCursorTypeToDefaultRequest");
		
		ULibraryMenu_C_ResetMouseCursorTypeToDefaultRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.Construct");
		
		ULibraryMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.OnAnimationFinished");
		
		ULibraryMenu_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		ULibraryMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.SelectTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELibraryMenuType                                   InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::SelectTab(ELibraryMenuType InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.SelectTab");
		
		ULibraryMenu_C_SelectTab_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.BookmarkUpdateRequest
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::BookmarkUpdateRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.BookmarkUpdateRequest");
		
		ULibraryMenu_C_BookmarkUpdateRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.UpdateBookmarkStatusButton
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::UpdateBookmarkStatusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.UpdateBookmarkStatusButton");
		
		ULibraryMenu_C_UpdateBookmarkStatusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.OnLoadAchivementDelegate_event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FSBAchievementInfo>                  AchievementList                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULibraryMenu_C::OnLoadAchivementDelegate_event(bool Result, TArray<struct FSBAchievementInfo> AchievementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.OnLoadAchivementDelegate_event");
		
		ULibraryMenu_C_OnLoadAchivementDelegate_event_Params params {};
		params.Result = Result;
		params.AchievementList = AchievementList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.SetupAchievement_Event
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::SetupAchievement_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.SetupAchievement_Event");
		
		ULibraryMenu_C_SetupAchievement_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.SetupTheater_Event
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::SetupTheater_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.SetupTheater_Event");
		
		ULibraryMenu_C_SetupTheater_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.OnSameMenuBookmarkAccessNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBookMarkType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.OnSameMenuBookmarkAccessNew");
		
		ULibraryMenu_C_OnSameMenuBookmarkAccessNew_Params params {};
		params.InBookMarkType = InBookMarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.Library_SubMenu_Open
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::Library_SubMenu_Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.Library_SubMenu_Open");
		
		ULibraryMenu_C_Library_SubMenu_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
		
		ULibraryMenu_C_BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.ButtonRefreshAchievement
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_C::ButtonRefreshAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.ButtonRefreshAchievement");
		
		ULibraryMenu_C_ButtonRefreshAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.OnLoadAchievementDataDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::OnLoadAchievementDataDelegate_Event(bool Result, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.OnLoadAchievementDataDelegate_Event");
		
		ULibraryMenu_C_OnLoadAchievementDataDelegate_Event_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu.LibraryMenu_C.ExecuteUbergraph_LibraryMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_C::ExecuteUbergraph_LibraryMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu.LibraryMenu_C.ExecuteUbergraph_LibraryMenu");
		
		ULibraryMenu_C_ExecuteUbergraph_LibraryMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu.LibraryMenu_C");
		return ptr;
	}

}


