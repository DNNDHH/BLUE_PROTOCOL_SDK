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
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.TermRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubMenuTermReason                                 InReason                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESubMenuTermRequestReply ULibraryMenu_Monster_C::TermRequest(ESubMenuTermReason InReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.TermRequest");
		
		ULibraryMenu_Monster_C_TermRequest_Params params {};
		params.InReason = InReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.ChangeDetailEnemyId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EnemyId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_C::ChangeDetailEnemyId(const class FName& EnemyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.ChangeDetailEnemyId");
		
		ULibraryMenu_Monster_C_ChangeDetailEnemyId_Params params {};
		params.EnemyId = EnemyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateCategoryListMark
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::UpdateCategoryListMark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateCategoryListMark");
		
		ULibraryMenu_Monster_C_UpdateCategoryListMark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.BossFlagCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EnemyId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Boss                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Unique                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_C::BossFlagCheck(const class FName& EnemyId, bool* Boss, bool* Unique)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.BossFlagCheck");
		
		ULibraryMenu_Monster_C_BossFlagCheck_Params params {};
		params.EnemyId = EnemyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Boss != nullptr)
			*Boss = params.Boss;
		if (Unique != nullptr)
			*Unique = params.Unique;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.ModelPartsChange
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::ModelPartsChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.ModelPartsChange");
		
		ULibraryMenu_Monster_C_ModelPartsChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateSearchVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        SearchWord                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_Monster_C::UpdateSearchVisibility(const class FText& SearchWord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateSearchVisibility");
		
		ULibraryMenu_Monster_C_UpdateSearchVisibility_Params params {};
		params.SearchWord = SearchWord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnAppearanceListClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_C::OnAppearanceListClick(int32_t listIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnAppearanceListClick");
		
		ULibraryMenu_Monster_C_OnAppearanceListClick_Params params {};
		params.listIndex = listIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.CreateAppearanceList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::CreateAppearanceList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.CreateAppearanceList");
		
		ULibraryMenu_Monster_C_CreateAppearanceList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.SaveEnemyReadId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EnemyId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SaveAdd                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_C::SaveEnemyReadId(const class FName& EnemyId, bool* SaveAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.SaveEnemyReadId");
		
		ULibraryMenu_Monster_C_SaveEnemyReadId_Params params {};
		params.EnemyId = EnemyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SaveAdd != nullptr)
			*SaveAdd = params.SaveAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.IsReadCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBTextTableHash                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBTextTableHash                            RaceId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBTextTableHash                            readId                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRead                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_C::IsReadCategory(const struct FSBTextTableHash& ID, const struct FSBTextTableHash& RaceId, struct FSBTextTableHash* readId, bool* IsRead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.IsReadCategory");
		
		ULibraryMenu_Monster_C_IsReadCategory_Params params {};
		params.ID = ID;
		params.RaceId = RaceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (readId != nullptr)
			*readId = params.readId;
		if (IsRead != nullptr)
			*IsRead = params.IsRead;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.IsAllRead
	 * 		Flags  -> ()
	 */
	bool ULibraryMenu_Monster_C::IsAllRead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.IsAllRead");
		
		ULibraryMenu_Monster_C_IsAllRead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.CreateCategoryList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::CreateCategoryList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.CreateCategoryList");
		
		ULibraryMenu_Monster_C_CreateCategoryList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnParentTerm
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::OnParentTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnParentTerm");
		
		ULibraryMenu_Monster_C_OnParentTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnRMShopClosed
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::OnRMShopClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnRMShopClosed");
		
		ULibraryMenu_Monster_C_OnRMShopClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnSameMenuBookmarkAccessNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBookMarkType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnSameMenuBookmarkAccessNew");
		
		ULibraryMenu_Monster_C_OnSameMenuBookmarkAccessNew_Params params {};
		params.InBookMarkType = InBookMarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnSubMenuUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MainPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_C::OnSubMenuUpdate(int32_t MainPage, int32_t SubPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnSubMenuUpdate");
		
		ULibraryMenu_Monster_C_OnSubMenuUpdate_Params params {};
		params.MainPage = MainPage;
		params.SubPage = SubPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.ResetMouseCursorTypeToDefaultRequest
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::ResetMouseCursorTypeToDefaultRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.ResetMouseCursorTypeToDefaultRequest");
		
		ULibraryMenu_Monster_C_ResetMouseCursorTypeToDefaultRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.InitializeCaptureStudio
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::InitializeCaptureStudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.InitializeCaptureStudio");
		
		ULibraryMenu_Monster_C_InitializeCaptureStudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnModelLoadComplete
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::OnModelLoadComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnModelLoadComplete");
		
		ULibraryMenu_Monster_C_OnModelLoadComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.FinalizeCaptureStudio
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::FinalizeCaptureStudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.FinalizeCaptureStudio");
		
		ULibraryMenu_Monster_C_FinalizeCaptureStudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.SetModelControllEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_C::SetModelControllEnabled(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.SetModelControllEnabled");
		
		ULibraryMenu_Monster_C_SetModelControllEnabled_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.SetModelVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_C::SetModelVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.SetModelVisibility");
		
		ULibraryMenu_Monster_C_SetModelVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.ModelLoadRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EnemyCharacterId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBLibraryEnemyViewSetting                         ViewSetting                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBLibraryEnemyWeaponSetting                       WeaponSetting                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_C::ModelLoadRequest(const class FString& EnemyCharacterId, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.ModelLoadRequest");
		
		ULibraryMenu_Monster_C_ModelLoadRequest_Params params {};
		params.EnemyCharacterId = EnemyCharacterId;
		params.ViewSetting = ViewSetting;
		params.WeaponSetting = WeaponSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnModelLoadedAllMipFunc
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::OnModelLoadedAllMipFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnModelLoadedAllMipFunc");
		
		ULibraryMenu_Monster_C_OnModelLoadedAllMipFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.Construct");
		
		ULibraryMenu_Monster_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.Tick");
		
		ULibraryMenu_Monster_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnAnimationFinished");
		
		ULibraryMenu_Monster_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateEnemyModel
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::UpdateEnemyModel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateEnemyModel");
		
		ULibraryMenu_Monster_C_UpdateEnemyModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.ImageVisibleEvent
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::ImageVisibleEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.ImageVisibleEvent");
		
		ULibraryMenu_Monster_C_ImageVisibleEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature(const class FText& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature");
		
		ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.Destruct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.Destruct");
		
		ULibraryMenu_Monster_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_WindowOpenButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_WindowOpenButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_WindowOpenButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_WindowOpenButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.Esc_ModelView
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::Esc_ModelView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.Esc_ModelView");
		
		ULibraryMenu_Monster_C_Esc_ModelView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ButtonFullScreen_ModelView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_ButtonFullScreen_ModelView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ButtonFullScreen_ModelView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_ButtonFullScreen_ModelView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.Close_ModelView
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::Close_ModelView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.Close_ModelView");
		
		ULibraryMenu_Monster_C_Close_ModelView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnClosePopup
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::OnClosePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnClosePopup");
		
		ULibraryMenu_Monster_C_OnClosePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ButtonFullScreen_MonsterDetails_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_ButtonFullScreen_MonsterDetails_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ButtonFullScreen_MonsterDetails_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_ButtonFullScreen_MonsterDetails_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.PressedAreaList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::PressedAreaList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.PressedAreaList");
		
		ULibraryMenu_Monster_C_PressedAreaList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.UnBindArealistBtn
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::UnBindArealistBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.UnBindArealistBtn");
		
		ULibraryMenu_Monster_C_UnBindArealistBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnEnemyDataLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_C::OnEnemyDataLoaded(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnEnemyDataLoaded");
		
		ULibraryMenu_Monster_C_OnEnemyDataLoaded_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.AreaListVisibleChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_C::AreaListVisibleChange(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.AreaListVisibleChange");
		
		ULibraryMenu_Monster_C_AreaListVisibleChange_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature");
		
		ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature");
		
		ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_WindowOpenButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_WindowOpenButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_WindowOpenButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_WindowOpenButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.AreaListSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        EnemyId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_C::AreaListSelect(int32_t Index, const class FName& EnemyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.AreaListSelect");
		
		ULibraryMenu_Monster_C_AreaListSelect_Params params {};
		params.Index = Index;
		params.EnemyId = EnemyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.ExecuteUbergraph_LibraryMenu_Monster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_C::ExecuteUbergraph_LibraryMenu_Monster(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.ExecuteUbergraph_LibraryMenu_Monster");
		
		ULibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster.LibraryMenu_Monster_C.AllReadMonster__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_C::AllReadMonster__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster.LibraryMenu_Monster_C.AllReadMonster__DelegateSignature");
		
		ULibraryMenu_Monster_C_AllReadMonster__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_Monster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_Monster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_Monster.LibraryMenu_Monster_C");
		return ptr;
	}

}


