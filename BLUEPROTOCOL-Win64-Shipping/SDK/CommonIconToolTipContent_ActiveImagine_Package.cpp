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
	 * 		Name   -> Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineDataBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InMasterImagine                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      InUniqueId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsImagineIconActive                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InUseClassTypeForLevelSync                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassTypeForLevelSync                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InForceLevelSyncOff                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPerkId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStackBNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStackBMax                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInUseArgBattleScore                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InBattleScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_ActiveImagine_C::SetImagineDataBase(const struct FSBMasterImagine& InMasterImagine, const class FString& InUniqueId, bool InIsImagineIconActive, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool InForceLevelSyncOff, int32_t InClassLevel, int32_t InPerkId, int32_t InStackBNum, int32_t InStackBMax, bool bInUseArgBattleScore, int32_t InBattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineDataBase");
		
		UCommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase_Params params {};
		params.InMasterImagine = InMasterImagine;
		params.InUniqueId = InUniqueId;
		params.InIsImagineIconActive = InIsImagineIconActive;
		params.InUseClassTypeForLevelSync = InUseClassTypeForLevelSync;
		params.InClassTypeForLevelSync = InClassTypeForLevelSync;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		params.InForceLevelSyncOff = InForceLevelSyncOff;
		params.InClassLevel = InClassLevel;
		params.InPerkId = InPerkId;
		params.InStackBNum = InStackBNum;
		params.InStackBMax = InStackBMax;
		params.bInUseArgBattleScore = bInUseArgBattleScore;
		params.InBattleScore = InBattleScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineIconActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTipContent_ActiveImagine_C::SetImagineIconActive(bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineIconActive");
		
		UCommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive_Params params {};
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineLv                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutImagineLv                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_ActiveImagine_C::SetImagineLevel(int32_t InImagineLv, int32_t InClassLevel, int32_t* OutImagineLv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineLevel");
		
		UCommonIconToolTipContent_ActiveImagine_C_SetImagineLevel_Params params {};
		params.InImagineLv = InImagineLv;
		params.InClassLevel = InClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImagineLv != nullptr)
			*OutImagineLv = params.OutImagineLv;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InMasterImagine                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      InUniqueId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsImagineIconActive                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InUseClassTypeForLevelSync                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassTypeForLevelSync                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InForceLevelSyncOff                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTipContent_ActiveImagine_C::SetImagineData(const struct FSBMasterImagine& InMasterImagine, const class FString& InUniqueId, bool InIsImagineIconActive, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool InForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineData");
		
		UCommonIconToolTipContent_ActiveImagine_C_SetImagineData_Params params {};
		params.InMasterImagine = InMasterImagine;
		params.InUniqueId = InUniqueId;
		params.InIsImagineIconActive = InIsImagineIconActive;
		params.InUseClassTypeForLevelSync = InUseClassTypeForLevelSync;
		params.InClassTypeForLevelSync = InClassTypeForLevelSync;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		params.InForceLevelSyncOff = InForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_ActiveImagine_C::OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54");
		
		UCommonIconToolTipContent_ActiveImagine_C_OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTipContent_ActiveImagine_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.PreConstruct");
		
		UCommonIconToolTipContent_ActiveImagine_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommonIconToolTipContent_ActiveImagine_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.Construct");
		
		UCommonIconToolTipContent_ActiveImagine_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadStart
	 * 		Flags  -> ()
	 */
	void UCommonIconToolTipContent_ActiveImagine_C::ImagineIconLoadStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadStart");
		
		UCommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadRequestCheckStart
	 * 		Flags  -> ()
	 */
	void UCommonIconToolTipContent_ActiveImagine_C::ImagineIconLoadRequestCheckStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadRequestCheckStart");
		
		UCommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadRequestCheckStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InImagineMaster                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonIconToolTipContent_ActiveImagine_C::ImagineIconLoadRequest(const struct FSBMasterImagine& InImagineMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadRequest");
		
		UCommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadRequest_Params params {};
		params.InImagineMaster = InImagineMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_ActiveImagine_C::ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine");
		
		UCommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTipContent_ActiveImagine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTipContent_ActiveImagine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C");
		return ptr;
	}

}


