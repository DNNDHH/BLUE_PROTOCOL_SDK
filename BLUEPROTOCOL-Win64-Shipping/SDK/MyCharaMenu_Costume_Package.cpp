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
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnItemListUpdate
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::OnItemListUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnItemListUpdate");
		
		UMyCharaMenu_Costume_C_OnItemListUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OpenExpiredMessageWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CostumeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::OpenExpiredMessageWindow(int32_t CostumeId, bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OpenExpiredMessageWindow");
		
		UMyCharaMenu_Costume_C_OpenExpiredMessageWindow_Params params {};
		params.CostumeId = CostumeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.LocationToEquipType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharaPartsLocation                                CharaPartsLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  CharaEquipType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Costume_C::LocationToEquipType(ECharaPartsLocation CharaPartsLocation, ESBCharaEquipType* CharaEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.LocationToEquipType");
		
		UMyCharaMenu_Costume_C_LocationToEquipType_Params params {};
		params.CharaPartsLocation = CharaPartsLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharaEquipType != nullptr)
			*CharaEquipType = params.CharaEquipType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ClearPreviewDatas
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::ClearPreviewDatas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ClearPreviewDatas");
		
		UMyCharaMenu_Costume_C_ClearPreviewDatas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetDressOnOffButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDressOn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::SetDressOnOffButton(bool InIsDressOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetDressOnOffButton");
		
		UMyCharaMenu_Costume_C_SetDressOnOffButton_Params params {};
		params.InIsDressOn = InIsDressOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.FindConflictingCompositeWearbyEquipInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharaEquipType                                  EquipType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharacterGender                                 Gender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsConflict                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBCharaEquipType                                  ConflictEquipType                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Costume_C::FindConflictingCompositeWearbyEquipInfo(ESBCharaEquipType EquipType, ESBCharacterGender Gender, bool* IsConflict, ESBCharaEquipType* ConflictEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.FindConflictingCompositeWearbyEquipInfo");
		
		UMyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo_Params params {};
		params.EquipType = EquipType;
		params.Gender = Gender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsConflict != nullptr)
			*IsConflict = params.IsConflict;
		if (ConflictEquipType != nullptr)
			*ConflictEquipType = params.ConflictEquipType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdatePlayerCharacter_Func
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::UpdatePlayerCharacter_Func()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdatePlayerCharacter_Func");
		
		UMyCharaMenu_Costume_C_UpdatePlayerCharacter_Func_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckCostumeRingEquipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Equipment                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Preview                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBCharaEquipType                                  EquipType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Costume_C::CheckCostumeRingEquipment(const class FString& UniqueId, bool* Equipment, bool* Preview, ESBCharaEquipType* EquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckCostumeRingEquipment");
		
		UMyCharaMenu_Costume_C_CheckCostumeRingEquipment_Params params {};
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Equipment != nullptr)
			*Equipment = params.Equipment;
		if (Preview != nullptr)
			*Preview = params.Preview;
		if (EquipType != nullptr)
			*EquipType = params.EquipType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateEquippedCostumeInfo
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::UpdateEquippedCostumeInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateEquippedCostumeInfo");
		
		UMyCharaMenu_Costume_C_UpdateEquippedCostumeInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OutputEquipmentCostumeLog
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::OutputEquipmentCostumeLog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OutputEquipmentCostumeLog");
		
		UMyCharaMenu_Costume_C_OutputEquipmentCostumeLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateCostumePreview
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::UpdateCostumePreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateCostumePreview");
		
		UMyCharaMenu_Costume_C_UpdateCostumePreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.IsPreviewMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Preview                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::IsPreviewMode(bool* Preview)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.IsPreviewMode");
		
		UMyCharaMenu_Costume_C_IsPreviewMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Preview != nullptr)
			*Preview = params.Preview;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetPreviewCostumeUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharaEquipType                                  EquipmentType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Costume_C::GetPreviewCostumeUniqueId(ESBCharaEquipType EquipmentType, class FString* UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetPreviewCostumeUniqueId");
		
		UMyCharaMenu_Costume_C_GetPreviewCostumeUniqueId_Params params {};
		params.EquipmentType = EquipmentType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueId != nullptr)
			*UniqueId = params.UniqueId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckCostumeEquipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharaEquipType                                  EquipType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EquipFlag                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::CheckCostumeEquipment(ESBCharaEquipType EquipType, bool* EquipFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckCostumeEquipment");
		
		UMyCharaMenu_Costume_C_CheckCostumeEquipment_Params params {};
		params.EquipType = EquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EquipFlag != nullptr)
			*EquipFlag = params.EquipFlag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetCharaCreateParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharaEquipItemCharaCreateInfo              CreateInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_Costume_C::SetCharaCreateParameter(const struct FCharaEquipItemCharaCreateInfo& CreateInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetCharaCreateParameter");
		
		UMyCharaMenu_Costume_C_SetCharaCreateParameter_Params params {};
		params.CreateInfo = CreateInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeDecideButtonVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::ChangeDecideButtonVisibility(bool Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeDecideButtonVisibility");
		
		UMyCharaMenu_Costume_C_ChangeDecideButtonVisibility_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckPreviewUnusedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Unused                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::CheckPreviewUnusedItem(bool* Unused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckPreviewUnusedItem");
		
		UMyCharaMenu_Costume_C_CheckPreviewUnusedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Unused != nullptr)
			*Unused = params.Unused;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.MakeSaveRequestItemData
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::MakeSaveRequestItemData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.MakeSaveRequestItemData");
		
		UMyCharaMenu_Costume_C_MakeSaveRequestItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddPreviewCostumeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharaEquipItemInfo                         NewCostumeEquipItemInfo                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBCharaEquipType                                  CostumeEquipType                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharaEquipItemCharaCreateInfo              NewCostumeEquipCharaCreateInfo                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_Costume_C::AddPreviewCostumeItem(struct FCharaEquipItemInfo* NewCostumeEquipItemInfo, ESBCharaEquipType* CostumeEquipType, struct FCharaEquipItemCharaCreateInfo* NewCostumeEquipCharaCreateInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddPreviewCostumeItem");
		
		UMyCharaMenu_Costume_C_AddPreviewCostumeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewCostumeEquipItemInfo != nullptr)
			*NewCostumeEquipItemInfo = params.NewCostumeEquipItemInfo;
		if (CostumeEquipType != nullptr)
			*CostumeEquipType = params.CostumeEquipType;
		if (NewCostumeEquipCharaCreateInfo != nullptr)
			*NewCostumeEquipCharaCreateInfo = params.NewCostumeEquipCharaCreateInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddPreviewCostumeItemMulti
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::AddPreviewCostumeItemMulti()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddPreviewCostumeItemMulti");
		
		UMyCharaMenu_Costume_C_AddPreviewCostumeItemMulti_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.InitDefaultCostumeData
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::InitDefaultCostumeData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.InitDefaultCostumeData");
		
		UMyCharaMenu_Costume_C_InitDefaultCostumeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddNewEquipInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharaEquipItemInfo                         NewCostumeEquipItemInfo                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FCharaEquipItemCharaCreateInfo              NewCostumeEquipCharaCreateInfo                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBCharaEquipType                                  CostumeEquipType                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Costume_C::AddNewEquipInfo(const struct FCharaEquipItemInfo& NewCostumeEquipItemInfo, const struct FCharaEquipItemCharaCreateInfo& NewCostumeEquipCharaCreateInfo, ESBCharaEquipType CostumeEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddNewEquipInfo");
		
		UMyCharaMenu_Costume_C_AddNewEquipInfo_Params params {};
		params.NewCostumeEquipItemInfo = NewCostumeEquipItemInfo;
		params.NewCostumeEquipCharaCreateInfo = NewCostumeEquipCharaCreateInfo;
		params.CostumeEquipType = CostumeEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ClearNewEquipInfo
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::ClearNewEquipInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ClearNewEquipInfo");
		
		UMyCharaMenu_Costume_C_ClearNewEquipInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeFunc
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::ChangeCostumeFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeFunc");
		
		UMyCharaMenu_Costume_C_ChangeCostumeFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetUIBlockerVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::SetUIBlockerVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetUIBlockerVisibility");
		
		UMyCharaMenu_Costume_C_SetUIBlockerVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetAvatarCostumePartsLoadingFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsAvatarCostumePartsLoading                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::GetAvatarCostumePartsLoadingFlag(bool* OutIsAvatarCostumePartsLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetAvatarCostumePartsLoadingFlag");
		
		UMyCharaMenu_Costume_C_GetAvatarCostumePartsLoadingFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsAvatarCostumePartsLoading != nullptr)
			*OutIsAvatarCostumePartsLoading = params.OutIsAvatarCostumePartsLoading;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetAvatarCostumePartsLoadingFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsLoading                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::SetAvatarCostumePartsLoadingFlag(bool InIsLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetAvatarCostumePartsLoadingFlag");
		
		UMyCharaMenu_Costume_C_SetAvatarCostumePartsLoadingFlag_Params params {};
		params.InIsLoading = InIsLoading;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeProcTerm
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::ChangeCostumeProcTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeProcTerm");
		
		UMyCharaMenu_Costume_C_ChangeCostumeProcTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeProcStart
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::ChangeCostumeProcStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeProcStart");
		
		UMyCharaMenu_Costume_C_ChangeCostumeProcStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetEquipItemCharaCreateInfoFromEquipItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharaEquipItemInfo                         InEquipItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            InMaterialId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDetachEquip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FCharaEquipItemCharaCreateInfo              OutEquipItemCharaCreateInfo                                (Parm, OutParm)
	 */
	void UMyCharaMenu_Costume_C::GetEquipItemCharaCreateInfoFromEquipItemInfo(const struct FCharaEquipItemInfo& InEquipItemInfo, int32_t InMaterialId, ESBCharaEquipType InEquipType, bool IsDetachEquip, bool* IsValid, struct FCharaEquipItemCharaCreateInfo* OutEquipItemCharaCreateInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetEquipItemCharaCreateInfoFromEquipItemInfo");
		
		UMyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo_Params params {};
		params.InEquipItemInfo = InEquipItemInfo;
		params.InMaterialId = InMaterialId;
		params.InEquipType = InEquipType;
		params.IsDetachEquip = IsDetachEquip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutEquipItemCharaCreateInfo != nullptr)
			*OutEquipItemCharaCreateInfo = params.OutEquipItemCharaCreateInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Close
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Close");
		
		UMyCharaMenu_Costume_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InRingUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Costume_C::BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature(const class FString& InRingUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature");
		
		UMyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature_Params params {};
		params.InRingUniqueId = InRingUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature");
		
		UMyCharaMenu_Costume_C_BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsLeftHand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature(bool InIsLeftHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature");
		
		UMyCharaMenu_Costume_C_BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature_Params params {};
		params.InIsLeftHand = InIsLeftHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Costume_C::BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature(const class FString& InItemUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature");
		
		UMyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature_Params params {};
		params.InItemUniqueId = InItemUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Costume_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnAnimationFinished");
		
		UMyCharaMenu_Costume_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_2_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_2_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_2_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature");
		
		UMyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_2_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_6_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_6_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_6_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature");
		
		UMyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_6_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveCostumeMultipleEquipsDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_Costume_C::OnSaveCostumeMultipleEquipsDelegate(int32_t RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveCostumeMultipleEquipsDelegate");
		
		UMyCharaMenu_Costume_C_OnSaveCostumeMultipleEquipsDelegate_Params params {};
		params.RetCode = RetCode;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveCostumeEquipDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_Costume_C::OnSaveCostumeEquipDelegate(int32_t RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveCostumeEquipDelegate");
		
		UMyCharaMenu_Costume_C_OnSaveCostumeEquipDelegate_Params params {};
		params.RetCode = RetCode;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateCostumeIconTable
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::UpdateCostumeIconTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateCostumeIconTable");
		
		UMyCharaMenu_Costume_C_UpdateCostumeIconTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnOtherCostumeCandidateSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDetach                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::OnOtherCostumeCandidateSelected(bool IsDetach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnOtherCostumeCandidateSelected");
		
		UMyCharaMenu_Costume_C_OnOtherCostumeCandidateSelected_Params params {};
		params.IsDetach = IsDetach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.DetachCostume
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::DetachCostume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.DetachCostume");
		
		UMyCharaMenu_Costume_C_DetachCostume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnDetach_CostumeCandidateList_イベント
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::OnDetach_CostumeCandidateList_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnDetach_CostumeCandidateList_イベント");
		
		UMyCharaMenu_Costume_C_OnDetach_CostumeCandidateList__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnIconSelected_CostumeCandidateList_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Costume_C::OnIconSelected_CostumeCandidateList_(const class FString& InItemUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnIconSelected_CostumeCandidateList_イベント");
		
		UMyCharaMenu_Costume_C_OnIconSelected_CostumeCandidateList__Params params {};
		params.InItemUniqueId = InItemUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdatePlayerCharacterCostume
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::UpdatePlayerCharacterCostume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdatePlayerCharacterCostume");
		
		UMyCharaMenu_Costume_C_UpdatePlayerCharacterCostume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveEquipInfo_Costume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_Costume_C::OnSaveEquipInfo_Costume(int32_t RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveEquipInfo_Costume");
		
		UMyCharaMenu_Costume_C_OnSaveEquipInfo_Costume_Params params {};
		params.RetCode = RetCode;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostume
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::ChangeCostume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostume");
		
		UMyCharaMenu_Costume_C_ChangeCostume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Destruct");
		
		UMyCharaMenu_Costume_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Init
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Init");
		
		UMyCharaMenu_Costume_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Construct");
		
		UMyCharaMenu_Costume_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_5_OnClickedPosingSwitchBtnRight__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_5_OnClickedPosingSwitchBtnRight__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_5_OnClickedPosingSwitchBtnRight__DelegateSignature");
		
		UMyCharaMenu_Costume_C_BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_5_OnClickedPosingSwitchBtnRight__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_4_OnClickedPosingSwitchBtnLeft__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_4_OnClickedPosingSwitchBtnLeft__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_4_OnClickedPosingSwitchBtnLeft__DelegateSignature");
		
		UMyCharaMenu_Costume_C_BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_4_OnClickedPosingSwitchBtnLeft__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDressVisibilitySwitchOn                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature(bool InIsDressVisibilitySwitchOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature");
		
		UMyCharaMenu_Costume_C_BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature_Params params {};
		params.InIsDressVisibilitySwitchOn = InIsDressVisibilitySwitchOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnUnexistHigherPriorityCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Costume_C::OnUnexistHigherPriorityCapture(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnUnexistHigherPriorityCapture");
		
		UMyCharaMenu_Costume_C_OnUnexistHigherPriorityCapture_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnExistHigherPriorityCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Costume_C::OnExistHigherPriorityCapture(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnExistHigherPriorityCapture");
		
		UMyCharaMenu_Costume_C_OnExistHigherPriorityCapture_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.DestructCharaImageGraph
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::DestructCharaImageGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.DestructCharaImageGraph");
		
		UMyCharaMenu_Costume_C_DestructCharaImageGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ConstructCharaImageGraph
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::ConstructCharaImageGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ConstructCharaImageGraph");
		
		UMyCharaMenu_Costume_C_ConstructCharaImageGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExpiredItemNoticeSystemMessageTimerEnd
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::ExpiredItemNoticeSystemMessageTimerEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExpiredItemNoticeSystemMessageTimerEnd");
		
		UMyCharaMenu_Costume_C_ExpiredItemNoticeSystemMessageTimerEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateCharaImageVisibility_Internal
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::UpdateCharaImageVisibility_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateCharaImageVisibility_Internal");
		
		UMyCharaMenu_Costume_C_UpdateCharaImageVisibility_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExpiredItemNoticeSystemMessageEnd
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::ExpiredItemNoticeSystemMessageEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExpiredItemNoticeSystemMessageEnd");
		
		UMyCharaMenu_Costume_C_ExpiredItemNoticeSystemMessageEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnTimerEndForSaveCostumeEquipInfoRequestFailureProc
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::OnTimerEndForSaveCostumeEquipInfoRequestFailureProc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnTimerEndForSaveCostumeEquipInfoRequestFailureProc");
		
		UMyCharaMenu_Costume_C_OnTimerEndForSaveCostumeEquipInfoRequestFailureProc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnTimerEndForPlayerAvatarAppearenceUpdateNormalProc
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::OnTimerEndForPlayerAvatarAppearenceUpdateNormalProc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnTimerEndForPlayerAvatarAppearenceUpdateNormalProc");
		
		UMyCharaMenu_Costume_C_OnTimerEndForPlayerAvatarAppearenceUpdateNormalProc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.RequestSaveCharaCostumeMultipleEquips
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::RequestSaveCharaCostumeMultipleEquips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.RequestSaveCharaCostumeMultipleEquips");
		
		UMyCharaMenu_Costume_C_RequestSaveCharaCostumeMultipleEquips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__MyCharaMenu_Costume_BtnCostumeChange_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::BndEvt__MyCharaMenu_Costume_BtnCostumeChange_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__MyCharaMenu_Costume_BtnCostumeChange_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UMyCharaMenu_Costume_C_BndEvt__MyCharaMenu_Costume_BtnCostumeChange_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnCostumeChange
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::OnCostumeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnCostumeChange");
		
		UMyCharaMenu_Costume_C_OnCostumeChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPreviewCostumeChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::OnPreviewCostumeChange(bool Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPreviewCostumeChange");
		
		UMyCharaMenu_Costume_C_OnPreviewCostumeChange_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ResetPreviewAvaterCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceReset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::ResetPreviewAvaterCostume(bool ForceReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ResetPreviewAvaterCostume");
		
		UMyCharaMenu_Costume_C_ResetPreviewAvaterCostume_Params params {};
		params.ForceReset = ForceReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnShowExpiredItemMessage
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::OnShowExpiredItemMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnShowExpiredItemMessage");
		
		UMyCharaMenu_Costume_C_OnShowExpiredItemMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPartsTimeEventStart
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::OnPartsTimeEventStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPartsTimeEventStart");
		
		UMyCharaMenu_Costume_C_OnPartsTimeEventStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnOpenMenu
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::OnOpenMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnOpenMenu");
		
		UMyCharaMenu_Costume_C_OnOpenMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExecuteUbergraph_MyCharaMenu_Costume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Costume_C::ExecuteUbergraph_MyCharaMenu_Costume(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExecuteUbergraph_MyCharaMenu_Costume");
		
		UMyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnRefreshPreviewCostume__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharaCreateParameter                     Parameter                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_Costume_C::OnRefreshPreviewCostume__DelegateSignature(const struct FSBCharaCreateParameter& Parameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnRefreshPreviewCostume__DelegateSignature");
		
		UMyCharaMenu_Costume_C_OnRefreshPreviewCostume__DelegateSignature_Params params {};
		params.Parameter = Parameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSetAvatarImageReuploadFlag__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Costume_C::OnSetAvatarImageReuploadFlag__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSetAvatarImageReuploadFlag__DelegateSignature");
		
		UMyCharaMenu_Costume_C_OnSetAvatarImageReuploadFlag__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSetCostumePreviewParameter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharaCreateParameter                     CharaCreateParameter                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::OnSetCostumePreviewParameter__DelegateSignature(const struct FSBCharaCreateParameter& CharaCreateParameter, bool Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSetCostumePreviewParameter__DelegateSignature");
		
		UMyCharaMenu_Costume_C_OnSetCostumePreviewParameter__DelegateSignature_Params params {};
		params.CharaCreateParameter = CharaCreateParameter;
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsCostumeOn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature(bool InIsCostumeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature");
		
		UMyCharaMenu_Costume_C_OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature_Params params {};
		params.InIsCostumeOn = InIsCostumeOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarSwitchPosing__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OnPosingCommandName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSwitchPosingToPrev                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::OnPlayerAvatarSwitchPosing__DelegateSignature(const class FName& OnPosingCommandName, bool IsSwitchPosingToPrev)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarSwitchPosing__DelegateSignature");
		
		UMyCharaMenu_Costume_C_OnPlayerAvatarSwitchPosing__DelegateSignature_Params params {};
		params.OnPosingCommandName = OnPosingCommandName;
		params.IsSwitchPosingToPrev = IsSwitchPosingToPrev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarRotateActive__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::OnPlayerAvatarRotateActive__DelegateSignature(bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarRotateActive__DelegateSignature");
		
		UMyCharaMenu_Costume_C_OnPlayerAvatarRotateActive__DelegateSignature_Params params {};
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnChangeCostumeProc__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ProcStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_Costume_C::OnChangeCostumeProc__DelegateSignature(bool ProcStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnChangeCostumeProc__DelegateSignature");
		
		UMyCharaMenu_Costume_C_OnChangeCostumeProc__DelegateSignature_Params params {};
		params.ProcStart = ProcStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_Costume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_Costume_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_Costume.MyCharaMenu_Costume_C");
		return ptr;
	}

}


