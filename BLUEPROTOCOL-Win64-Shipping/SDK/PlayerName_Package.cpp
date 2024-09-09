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
	 * 		Name   -> Function PlayerName.PlayerName_C.UpdatePartyLeaderIcon
	 * 		Flags  -> ()
	 */
	void UPlayerName_C::UpdatePartyLeaderIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.UpdatePartyLeaderIcon");
		
		UPlayerName_C_UpdatePartyLeaderIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.UpdateAutoDeliveryQuest
	 * 		Flags  -> ()
	 */
	void UPlayerName_C::UpdateAutoDeliveryQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.UpdateAutoDeliveryQuest");
		
		UPlayerName_C_UpdateAutoDeliveryQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.UpdateLevelText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerName_C::UpdateLevelText(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.UpdateLevelText");
		
		UPlayerName_C_UpdateLevelText_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.SetClassData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       ClassType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerName_C::SetClassData(ESBClassType ClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.SetClassData");
		
		UPlayerName_C_SetClassData_Params params {};
		params.ClassType = ClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.SetAchievementNameVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerName_C::SetAchievementNameVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.SetAchievementNameVisibility");
		
		UPlayerName_C_SetAchievementNameVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.SetAchievementName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayerName_C::SetAchievementName(const class FText& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.SetAchievementName");
		
		UPlayerName_C_SetAchievementName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.SetPlayerNameVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerName_C::SetPlayerNameVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.SetPlayerNameVisibility");
		
		UPlayerName_C_SetPlayerNameVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.SetBgVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerName_C::SetBgVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.SetBgVisibility");
		
		UPlayerName_C_SetBgVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.SetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayerName_C::SetPlayerName(const class FText& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.SetPlayerName");
		
		UPlayerName_C_SetPlayerName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.LevelUpLevelUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPrevLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCurLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBExtraExpParse                            InExtraExpParse                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPlayerName_C::LevelUpLevelUpdate(int32_t InPrevLevel, int32_t InCurLevel, const struct FSBExtraExpParse& InExtraExpParse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.LevelUpLevelUpdate");
		
		UPlayerName_C_LevelUpLevelUpdate_Params params {};
		params.InPrevLevel = InPrevLevel;
		params.InCurLevel = InCurLevel;
		params.InExtraExpParse = InExtraExpParse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.ClassChangeLevelUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InDirtyExpiredEquipmentData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerName_C::ClassChangeLevelUpdate(int32_t InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.ClassChangeLevelUpdate");
		
		UPlayerName_C_ClassChangeLevelUpdate_Params params {};
		params.InRetCode = InRetCode;
		params.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InDirtyExpiredEquipmentData = InDirtyExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPlayerName_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.Destruct");
		
		UPlayerName_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.OnChangeTensionTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBTensionTagType                                  TensionTag                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerName_C::OnChangeTensionTag(ESBTensionTagType TensionTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.OnChangeTensionTag");
		
		UPlayerName_C_OnChangeTensionTag_Params params {};
		params.TensionTag = TensionTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.SetTensionIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerName_C::SetTensionIcon(class ASBPlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.SetTensionIcon");
		
		UPlayerName_C_SetTensionIcon_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.LoadCharacterInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerName_C::LoadCharacterInfo(class ASBPlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.LoadCharacterInfo");
		
		UPlayerName_C_LoadCharacterInfo_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.UnbindTensionTagChanged
	 * 		Flags  -> ()
	 */
	void UPlayerName_C::UnbindTensionTagChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.UnbindTensionTagChanged");
		
		UPlayerName_C_UnbindTensionTagChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerName_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.Tick");
		
		UPlayerName_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerName_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.Construct");
		
		UPlayerName_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerName.PlayerName_C.ExecuteUbergraph_PlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerName_C::ExecuteUbergraph_PlayerName(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerName.PlayerName_C.ExecuteUbergraph_PlayerName");
		
		UPlayerName_C_ExecuteUbergraph_PlayerName_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerName_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerName_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerName.PlayerName_C");
		return ptr;
	}

}


