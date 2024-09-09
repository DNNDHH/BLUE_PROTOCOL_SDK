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
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.IsAchievementPossession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InFindAchievementId                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Achievement_C::IsAchievementPossession(int32_t InFindAchievementId, int32_t B, bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.IsAchievementPossession");
		
		ULibraryMenu_Achievement_C_IsAchievementPossession_Params params {};
		params.InFindAchievementId = InFindAchievementId;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetAchievementComponent
	 * 		Flags  -> ()
	 */
	class USBPlayerAchievementComponent* ULibraryMenu_Achievement_C::GetAchievementComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetAchievementComponent");
		
		ULibraryMenu_Achievement_C_GetAchievementComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetLimitedTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TermId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Achievement_C::SetLimitedTime(const class FString& TermId, bool* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetLimitedTime");
		
		ULibraryMenu_Achievement_C_SetLimitedTime_Params params {};
		params.TermId = TermId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateCharacterAchievementDataInfo
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::UpdateCharacterAchievementDataInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateCharacterAchievementDataInfo");
		
		ULibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CheckAllAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAchievementMasterData>              outItemListInfo                                            (Parm, OutParm)
	 */
	void ULibraryMenu_Achievement_C::CheckAllAchievement(TArray<struct FAchievementMasterData>* outItemListInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CheckAllAchievement");
		
		ULibraryMenu_Achievement_C_CheckAllAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outItemListInfo != nullptr)
			*outItemListInfo = params.outItemListInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetAchievementReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMailData>                         OutMailData                                                (Parm, OutParm)
	 */
	void ULibraryMenu_Achievement_C::GetAchievementReward(TArray<struct FSBMailData>* OutMailData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetAchievementReward");
		
		ULibraryMenu_Achievement_C_GetAchievementReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMailData != nullptr)
			*OutMailData = params.OutMailData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Set Reward Btn
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::SetRewardBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Set Reward Btn");
		
		ULibraryMenu_Achievement_C_SetRewardBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetCategoryID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            outLargeCategoryId                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            outMediumCategoryId                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Achievement_C::GetCategoryID(int32_t Value, int32_t* outLargeCategoryId, int32_t* outMediumCategoryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetCategoryID");
		
		ULibraryMenu_Achievement_C_GetCategoryID_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outLargeCategoryId != nullptr)
			*outLargeCategoryId = params.outLargeCategoryId;
		if (outMediumCategoryId != nullptr)
			*outMediumCategoryId = params.outMediumCategoryId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetLargeCategoryName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inInt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString ULibraryMenu_Achievement_C::GetLargeCategoryName(int32_t inInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetLargeCategoryName");
		
		ULibraryMenu_Achievement_C_GetLargeCategoryName_Params params {};
		params.inInt = inInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetGroupName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inInt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString ULibraryMenu_Achievement_C::GetGroupName(int32_t inInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetGroupName");
		
		ULibraryMenu_Achievement_C_GetGroupName_Params params {};
		params.inInt = inInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetAchievedDate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AchievementId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   InDateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Achievement_C::SetAchievedDate(int32_t AchievementId, struct FDateTime* InDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetAchievedDate");
		
		ULibraryMenu_Achievement_C_SetAchievedDate_Params params {};
		params.AchievementId = AchievementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDateTime != nullptr)
			*InDateTime = params.InDateTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetCharacterAchievementData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AchievementId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCharacterAchievementDataInfo             Data                                                       (Parm, OutParm, NoDestructor)
	 */
	void ULibraryMenu_Achievement_C::GetCharacterAchievementData(int32_t AchievementId, struct FSBCharacterAchievementDataInfo* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetCharacterAchievementData");
		
		ULibraryMenu_Achievement_C_GetCharacterAchievementData_Params params {};
		params.AchievementId = AchievementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.On_ComboBox_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* ULibraryMenu_Achievement_C::On_ComboBox_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.On_ComboBox_GenerateWidget_1");
		
		ULibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CheckCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAchievementMasterData                      MasterData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Achievement_C::CheckCategory(const struct FAchievementMasterData& MasterData, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CheckCategory");
		
		ULibraryMenu_Achievement_C_CheckCategory_Params params {};
		params.MasterData = MasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateSelectCategoryNewIcon
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::UpdateSelectCategoryNewIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateSelectCategoryNewIcon");
		
		ULibraryMenu_Achievement_C_UpdateSelectCategoryNewIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Get Read Achievement Id List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    ReadAchievementIdList                                      (Parm, OutParm)
	 */
	void ULibraryMenu_Achievement_C::GetReadAchievementIdList(TArray<int32_t>* ReadAchievementIdList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Get Read Achievement Id List");
		
		ULibraryMenu_Achievement_C_GetReadAchievementIdList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReadAchievementIdList != nullptr)
			*ReadAchievementIdList = params.ReadAchievementIdList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetAchievementId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Achievement_C::SetAchievementId(bool IsChecked, int32_t listIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetAchievementId");
		
		ULibraryMenu_Achievement_C_SetAchievementId_Params params {};
		params.IsChecked = IsChecked;
		params.listIndex = listIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.ClickListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Achievement_C::ClickListItem(int32_t listIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.ClickListItem");
		
		ULibraryMenu_Achievement_C_ClickListItem_Params params {};
		params.listIndex = listIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CreateItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Achievement_C::CreateItemList(int32_t InSelectID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CreateItemList");
		
		ULibraryMenu_Achievement_C_CreateItemList_Params params {};
		params.InSelectID = InSelectID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Create Category List
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::CreateCategoryList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Create Category List");
		
		ULibraryMenu_Achievement_C_CreateCategoryList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Initialize_RankProgress
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::Initialize_RankProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Initialize_RankProgress");
		
		ULibraryMenu_Achievement_C_Initialize_RankProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Initialize
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Initialize");
		
		ULibraryMenu_Achievement_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Construct");
		
		ULibraryMenu_Achievement_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Destruct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Destruct");
		
		ULibraryMenu_Achievement_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnLoadAchievementDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FSBAchievementInfo>                  AchievementList                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULibraryMenu_Achievement_C::OnLoadAchievementDelegate(bool Result, TArray<struct FSBAchievementInfo> AchievementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnLoadAchievementDelegate");
		
		ULibraryMenu_Achievement_C_OnLoadAchievementDelegate_Params params {};
		params.Result = Result;
		params.AchievementList = AchievementList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnSaveAchievementSelectedDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Achievement_C::OnSaveAchievementSelectedDelegate_Event(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnSaveAchievementSelectedDelegate_Event");
		
		ULibraryMenu_Achievement_C_OnSaveAchievementSelectedDelegate_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Achievement_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
		
		ULibraryMenu_Achievement_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.RequestAPI_LoadAchievementData
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::RequestAPI_LoadAchievementData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.RequestAPI_LoadAchievementData");
		
		ULibraryMenu_Achievement_C_RequestAPI_LoadAchievementData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnLoadAchievementDataDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Achievement_C::OnLoadAchievementDataDelegate_Event(bool Result, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnLoadAchievementDataDelegate_Event");
		
		ULibraryMenu_Achievement_C_OnLoadAchievementDataDelegate_Event_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CallErrorMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Achievement_C::CallErrorMessage(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CallErrorMessage");
		
		ULibraryMenu_Achievement_C_CallErrorMessage_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.RequestAPI_GetAchievementRewards
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::RequestAPI_GetAchievementRewards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.RequestAPI_GetAchievementRewards");
		
		ULibraryMenu_Achievement_C_RequestAPI_GetAchievementRewards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnGetAchievementRewardsDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBAchievementRewardData                    AchievementRewardData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_Achievement_C::OnGetAchievementRewardsDelegate_Event(bool Result, int32_t RetCode, const struct FSBAchievementRewardData& AchievementRewardData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnGetAchievementRewardsDelegate_Event");
		
		ULibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.AchievementRewardData = AchievementRewardData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.AttachmentListWindow_Close
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::AttachmentListWindow_Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.AttachmentListWindow_Close");
		
		ULibraryMenu_Achievement_C_AttachmentListWindow_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnGetRewardItemEvent
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::OnGetRewardItemEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnGetRewardItemEvent");
		
		ULibraryMenu_Achievement_C_OnGetRewardItemEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.MailListAttachmentAcceptResult_CloseEvent
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::MailListAttachmentAcceptResult_CloseEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.MailListAttachmentAcceptResult_CloseEvent");
		
		ULibraryMenu_Achievement_C_MailListAttachmentAcceptResult_CloseEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_6_OnSetAchievement__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_6_OnSetAchievement__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_6_OnSetAchievement__DelegateSignature");
		
		ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_6_OnSetAchievement__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             InMasterReward                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature(const struct FSBMasterReward& InMasterReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature");
		
		ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature_Params params {};
		params.InMasterReward = InMasterReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnCloseDetailMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Achievement_C::OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnCloseDetailMenu");
		
		ULibraryMenu_Achievement_C_OnCloseDetailMenu_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature");
		
		ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");
		
		ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_4_OnGetRewardItem__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_4_OnGetRewardItem__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_4_OnGetRewardItem__DelegateSignature");
		
		ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_4_OnGetRewardItem__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMailData>                         outRewardsData                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    outRewardsIds                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature(TArray<struct FSBMailData>* outRewardsData, TArray<int32_t>* outRewardsIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature");
		
		ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outRewardsData != nullptr)
			*outRewardsData = params.outRewardsData;
		if (outRewardsIds != nullptr)
			*outRewardsIds = params.outRewardsIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.ExecuteUbergraph_LibraryMenu_Achievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Achievement_C::ExecuteUbergraph_LibraryMenu_Achievement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.ExecuteUbergraph_LibraryMenu_Achievement");
		
		ULibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateNewIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MenuButtonListId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Achievement_C::UpdateNewIcon__DelegateSignature(int32_t MenuButtonListId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateNewIcon__DelegateSignature");
		
		ULibraryMenu_Achievement_C_UpdateNewIcon__DelegateSignature_Params params {};
		params.MenuButtonListId = MenuButtonListId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_Achievement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_Achievement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_Achievement.LibraryMenu_Achievement_C");
		return ptr;
	}

}


