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
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetPinMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPinSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::SetPinMode(bool IsPinSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetPinMode");
		
		UMapWidget_Map_C_SetPinMode_Params params {};
		params.IsPinSelected = IsPinSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.DebugQuestInfoPrint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPriority                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::DebugQuestInfoPrint(int32_t InIndex, int32_t InPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.DebugQuestInfoPrint");
		
		UMapWidget_Map_C_DebugQuestInfoPrint_Params params {};
		params.InIndex = InIndex;
		params.InPriority = InPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.Get Quest Category 2Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestCategory2                                    InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::GetQuestCategory2Name(EQuestCategory2 InCategory, class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.Get Quest Category 2Name");
		
		UMapWidget_Map_C_GetQuestCategory2Name_Params params {};
		params.InCategory = InCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.Get Portal to Location
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPortalName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      OutLocationName                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::GetPortaltoLocation(const class FString& InPortalName, class FString* OutLocationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.Get Portal to Location");
		
		UMapWidget_Map_C_GetPortaltoLocation_Params params {};
		params.InPortalName = InPortalName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocationName != nullptr)
			*OutLocationName = params.OutLocationName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetNamedEnemyLevelColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 OutColor                                                   (Parm, OutParm)
	 */
	void UMapWidget_Map_C::GetNamedEnemyLevelColor(int32_t InLevel, struct FSlateColor* OutColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetNamedEnemyLevelColor");
		
		UMapWidget_Map_C_GetNamedEnemyLevelColor_Params params {};
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutColor != nullptr)
			*OutColor = params.OutColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnPressed_QuestIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnPressed_QuestIcon(int32_t InQuestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnPressed_QuestIcon");
		
		UMapWidget_Map_C_OnPressed_QuestIcon_Params params {};
		params.InQuestId = InQuestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearWarpPointIconEx
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearWarpPointIconEx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearWarpPointIconEx");
		
		UMapWidget_Map_C_ClearWarpPointIconEx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateWarpPointEx
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdateWarpPointEx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateWarpPointEx");
		
		UMapWidget_Map_C_UpdateWarpPointEx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.HideDialog
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::HideDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.HideDialog");
		
		UMapWidget_Map_C_HideDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.DeleteDialog
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::DeleteDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.DeleteDialog");
		
		UMapWidget_Map_C_DeleteDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreateDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_Dialog_C*                                OutputPin                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::CreateDialog(class UBP_Dialog_C** OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreateDialog");
		
		UMapWidget_Map_C_CreateDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateMapPlaceNamePlate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::UpdateMapPlaceNamePlate(const class FString& InMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateMapPlaceNamePlate");
		
		UMapWidget_Map_C_UpdateMapPlaceNamePlate_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetLoadData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapBGConfigTableRow                      LoadData                                                   (Parm, OutParm)
	 */
	void UMapWidget_Map_C::GetLoadData(struct FSBMapBGConfigTableRow* LoadData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetLoadData");
		
		UMapWidget_Map_C_GetLoadData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoadData != nullptr)
			*LoadData = params.LoadData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetAreaMapPinMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AreaMapPinMax                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::GetAreaMapPinMax(int32_t* AreaMapPinMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetAreaMapPinMax");
		
		UMapWidget_Map_C_GetAreaMapPinMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AreaMapPinMax != nullptr)
			*AreaMapPinMax = params.AreaMapPinMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.IsWorldMapFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWorldMap                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::IsWorldMapFlag(bool* IsWorldMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.IsWorldMapFlag");
		
		UMapWidget_Map_C_IsWorldMapFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsWorldMap != nullptr)
			*IsWorldMap = params.IsWorldMap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetWorldMapFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWorldMap                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::SetWorldMapFlag(bool IsWorldMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetWorldMapFlag");
		
		UMapWidget_Map_C_SetWorldMapFlag_Params params {};
		params.IsWorldMap = IsWorldMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnRaidPortalClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMapWidget_TimeSymbolIcon_C*                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnRaidPortalClose(int32_t Index, class UMapWidget_TimeSymbolIcon_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnRaidPortalClose");
		
		UMapWidget_Map_C_OnRaidPortalClose_Params params {};
		params.Index = Index;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnPressed_WarpPointIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_WarpPointIcon_C*                  InWarpPointIcon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnPressed_WarpPointIcon(class UMapWidget_WarpPointIcon_C* InWarpPointIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnPressed_WarpPointIcon");
		
		UMapWidget_Map_C_OnPressed_WarpPointIcon_Params params {};
		params.InWarpPointIcon = InWarpPointIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnPressed_RegionIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InRegionMapId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnPressed_RegionIcon(const class FString& InRegionMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnPressed_RegionIcon");
		
		UMapWidget_Map_C_OnPressed_RegionIcon_Params params {};
		params.InRegionMapId = InRegionMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateCanvasScale
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdateCanvasScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateCanvasScale");
		
		UMapWidget_Map_C_UpdateCanvasScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.PublicDungeon_DirectWarpCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::PublicDungeon_DirectWarpCheck(const class FName& DungeonId, bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.PublicDungeon_DirectWarpCheck");
		
		UMapWidget_Map_C_PublicDungeon_DirectWarpCheck_Params params {};
		params.DungeonId = DungeonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.LocationIconVisibleCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LocationId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::LocationIconVisibleCheck(const class FName& LocationId, bool* Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.LocationIconVisibleCheck");
		
		UMapWidget_Map_C_LocationIconVisibleCheck_Params params {};
		params.LocationId = LocationId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateCampPointIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdateCampPointIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateCampPointIcon");
		
		UMapWidget_Map_C_UpdateCampPointIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearCampPointIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearCampPointIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearCampPointIcon");
		
		UMapWidget_Map_C_ClearCampPointIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.FindQuestAreaIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMiniMapQuestAreaConfig                   TargetData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FSBMiniMapQuestAreaConfig>           RefList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            TopIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    FindIndex                                                  (Parm, OutParm)
	 */
	void UMapWidget_Map_C::FindQuestAreaIcon(const struct FSBMiniMapQuestAreaConfig& TargetData, TArray<struct FSBMiniMapQuestAreaConfig>* RefList, int32_t* TopIndex, TArray<int32_t>* FindIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.FindQuestAreaIcon");
		
		UMapWidget_Map_C_FindQuestAreaIcon_Params params {};
		params.TargetData = TargetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RefList != nullptr)
			*RefList = params.RefList;
		if (TopIndex != nullptr)
			*TopIndex = params.TopIndex;
		if (FindIndex != nullptr)
			*FindIndex = params.FindIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreateChallengeQuestIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterProfileData                     ProfileData                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            LocationIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBFacilityType                                    FacilityType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::CreateChallengeQuestIcon(struct FSBCharacterProfileData* ProfileData, int32_t LocationIndex, ESBFacilityType FacilityType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreateChallengeQuestIcon");
		
		UMapWidget_Map_C_CreateChallengeQuestIcon_Params params {};
		params.LocationIndex = LocationIndex;
		params.FacilityType = FacilityType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProfileData != nullptr)
			*ProfileData = params.ProfileData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.TimeIconSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     IconWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMapWidget_CommonSymbolIcon_C*               TargetPosWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Prio                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::TimeIconSetting(class UWidget* IconWidget, class UMapWidget_CommonSymbolIcon_C* TargetPosWidget, int32_t Prio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.TimeIconSetting");
		
		UMapWidget_Map_C_TimeIconSetting_Params params {};
		params.IconWidget = IconWidget;
		params.TargetPosWidget = TargetPosWidget;
		params.Prio = Prio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateInterruptQuestAreaIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdateInterruptQuestAreaIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateInterruptQuestAreaIcon");
		
		UMapWidget_Map_C_UpdateInterruptQuestAreaIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.RemoveInterruptQuestAreaIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBInterruptQuestInstance*                   QuestInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::RemoveInterruptQuestAreaIcon(class ASBInterruptQuestInstance* QuestInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.RemoveInterruptQuestAreaIcon");
		
		UMapWidget_Map_C_RemoveInterruptQuestAreaIcon_Params params {};
		params.QuestInstance = QuestInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.AddInterruptQuestAreaIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBInterruptQuestInstance*                   QuestInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::AddInterruptQuestAreaIcon(class ASBInterruptQuestInstance* QuestInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.AddInterruptQuestAreaIcon");
		
		UMapWidget_Map_C_AddInterruptQuestAreaIcon_Params params {};
		params.QuestInstance = QuestInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CalcAreaIconSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UIconQuestArea_C*                            AreaWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::CalcAreaIconSize(const class FName& MapId, class UIconQuestArea_C* AreaWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CalcAreaIconSize");
		
		UMapWidget_Map_C_CalcAreaIconSize_Params params {};
		params.MapId = MapId;
		params.AreaWidget = AreaWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateQuestAreaIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdateQuestAreaIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateQuestAreaIcon");
		
		UMapWidget_Map_C_UpdateQuestAreaIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearQuestAreaIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearQuestAreaIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearQuestAreaIcon");
		
		UMapWidget_Map_C_ClearQuestAreaIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetResearchTeamList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBResearchTeamData>                 InList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMapWidget_Map_C::SetResearchTeamList(TArray<struct FSBResearchTeamData>* InList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetResearchTeamList");
		
		UMapWidget_Map_C_SetResearchTeamList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InList != nullptr)
			*InList = params.InList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearResearchTeamSymbolIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearResearchTeamSymbolIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearResearchTeamSymbolIcon");
		
		UMapWidget_Map_C_ClearResearchTeamSymbolIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreateResearchTeamSymbolIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::CreateResearchTeamSymbolIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreateResearchTeamSymbolIcon");
		
		UMapWidget_Map_C_CreateResearchTeamSymbolIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.RecalculateMapPlaceNamePlatePositions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InMapImageSize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::RecalculateMapPlaceNamePlatePositions(const struct FVector2D& InMapImageSize, const class FString& InMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.RecalculateMapPlaceNamePlatePositions");
		
		UMapWidget_Map_C_RecalculateMapPlaceNamePlatePositions_Params params {};
		params.InMapImageSize = InMapImageSize;
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetupMapPlaceNamePlates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::SetupMapPlaceNamePlates(const class FString& InMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetupMapPlaceNamePlates");
		
		UMapWidget_Map_C_SetupMapPlaceNamePlates_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateNamedEnemyIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdateNamedEnemyIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateNamedEnemyIcon");
		
		UMapWidget_Map_C_UpdateNamedEnemyIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearNamedEnemyIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearNamedEnemyIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearNamedEnemyIcon");
		
		UMapWidget_Map_C_ClearNamedEnemyIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreateNamedEnemyIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::CreateNamedEnemyIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreateNamedEnemyIcon");
		
		UMapWidget_Map_C_CreateNamedEnemyIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.TraverseCloudUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Floor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::TraverseCloudUpdate(const class FString& InMapId, int32_t Floor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.TraverseCloudUpdate");
		
		UMapWidget_Map_C_TraverseCloudUpdate_Params params {};
		params.InMapId = InMapId;
		params.Floor = Floor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.IsDisplayQuestIconStandby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestCategory2                                    QuestCategory2                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDisplay                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::IsDisplayQuestIconStandby(EQuestCategory2 QuestCategory2, bool* bDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.IsDisplayQuestIconStandby");
		
		UMapWidget_Map_C_IsDisplayQuestIconStandby_Params params {};
		params.QuestCategory2 = QuestCategory2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDisplay != nullptr)
			*bDisplay = params.bDisplay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.getQuestIconZOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestCategory2                                    Category2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestStatus                                       Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UMapWidget_Map_C::getQuestIconZOrder(EQuestCategory2 Category2, EQuestStatus Status, int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.getQuestIconZOrder");
		
		UMapWidget_Map_C_getQuestIconZOrder_Params params {};
		params.Category2 = Category2;
		params.Status = Status;
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateInterruptQuestIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdateInterruptQuestIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateInterruptQuestIcon");
		
		UMapWidget_Map_C_UpdateInterruptQuestIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearInterruptQuestIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearInterruptQuestIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearInterruptQuestIcon");
		
		UMapWidget_Map_C_ClearInterruptQuestIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreateInterruptQuestIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::CreateInterruptQuestIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreateInterruptQuestIcon");
		
		UMapWidget_Map_C_CreateInterruptQuestIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdatePlayerIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdatePlayerIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdatePlayerIcon");
		
		UMapWidget_Map_C_UpdatePlayerIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetupPlayerIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsIconVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::SetupPlayerIcon(bool IsIconVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetupPlayerIcon");
		
		UMapWidget_Map_C_SetupPlayerIcon_Params params {};
		params.IsIconVisible = IsIconVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetWarpConfirmationTextIdx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TextIdx                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::GetWarpConfirmationTextIdx(int32_t* TextIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetWarpConfirmationTextIdx");
		
		UMapWidget_Map_C_GetWarpConfirmationTextIdx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextIdx != nullptr)
			*TextIdx = params.TextIdx;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetWarpPointDataFromName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InWarpPointName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterWarpPoint                          OutWarpPointData                                           (Parm, OutParm)
	 */
	void UMapWidget_Map_C::GetWarpPointDataFromName(const class FString& InWarpPointName, bool* IsValid, struct FSBMasterWarpPoint* OutWarpPointData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetWarpPointDataFromName");
		
		UMapWidget_Map_C_GetWarpPointDataFromName_Params params {};
		params.InWarpPointName = InWarpPointName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutWarpPointData != nullptr)
			*OutWarpPointData = params.OutWarpPointData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.DoWarpFromWarpBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterWarpPoint                          InWarpPointData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_Map_C::DoWarpFromWarpBox(const struct FSBMasterWarpPoint& InWarpPointData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.DoWarpFromWarpBox");
		
		UMapWidget_Map_C_DoWarpFromWarpBox_Params params {};
		params.InWarpPointData = InWarpPointData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigRowName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapBGConfigTableRow                      InMagBGConfig                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OutRowName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::GetMapBGConfigRowName(const struct FSBMapBGConfigTableRow& InMagBGConfig, bool* OutIsValid, class FString* OutRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigRowName");
		
		UMapWidget_Map_C_GetMapBGConfigRowName_Params params {};
		params.InMagBGConfig = InMagBGConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutRowName != nullptr)
			*OutRowName = params.OutRowName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CheckIfWarpDestIsAbsoluteFree_ForAlpha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWarpPointMasterData                        InWarpPointMasterData                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsAbsoluteFree                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::CheckIfWarpDestIsAbsoluteFree_ForAlpha(const struct FWarpPointMasterData& InWarpPointMasterData, bool* IsAbsoluteFree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CheckIfWarpDestIsAbsoluteFree_ForAlpha");
		
		UMapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha_Params params {};
		params.InWarpPointMasterData = InWarpPointMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAbsoluteFree != nullptr)
			*IsAbsoluteFree = params.IsAbsoluteFree;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CalcPinPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InPin                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMapPinInfo                                 InMapPinInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMapWidget_Map_C::CalcPinPosition(class UMapWidget_MapPinnedPin_C* InPin, const struct FMapPinInfo& InMapPinInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CalcPinPosition");
		
		UMapWidget_Map_C_CalcPinPosition_Params params {};
		params.InPin = InPin;
		params.InMapPinInfo = InMapPinInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoFromPinId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inPinId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FMapPinInfo                                 OutMapPinInfo                                              (Parm, OutParm)
	 */
	void UMapWidget_Map_C::GetMapPinInfoFromPinId(int32_t inPinId, bool* IsValid, struct FMapPinInfo* OutMapPinInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoFromPinId");
		
		UMapWidget_Map_C_GetMapPinInfoFromPinId_Params params {};
		params.inPinId = inPinId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutMapPinInfo != nullptr)
			*OutMapPinInfo = params.OutMapPinInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMapPinInfo>                         MapPinInfoList                                             (Parm, OutParm)
	 */
	void UMapWidget_Map_C::GetMapPinInfoList(TArray<struct FMapPinInfo>* MapPinInfoList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoList");
		
		UMapWidget_Map_C_GetMapPinInfoList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapPinInfoList != nullptr)
			*MapPinInfoList = params.MapPinInfoList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetPinnedPinCnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PinnedPinCnt                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::GetPinnedPinCnd(int32_t* PinnedPinCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetPinnedPinCnd");
		
		UMapWidget_Map_C_GetPinnedPinCnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PinnedPinCnt != nullptr)
			*PinnedPinCnt = params.PinnedPinCnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.IsEnablePinIcon
	 * 		Flags  -> ()
	 */
	bool UMapWidget_Map_C::IsEnablePinIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.IsEnablePinIcon");
		
		UMapWidget_Map_C_IsEnablePinIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetVacantAreaMapPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   OutPinRef                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPinVacant                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::GetVacantAreaMapPin(class UMapWidget_MapPinnedPin_C** OutPinRef, bool* IsPinVacant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetVacantAreaMapPin");
		
		UMapWidget_Map_C_GetVacantAreaMapPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPinRef != nullptr)
			*OutPinRef = params.OutPinRef;
		if (IsPinVacant != nullptr)
			*IsPinVacant = params.IsPinVacant;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearQuestIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearQuestIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearQuestIcon");
		
		UMapWidget_Map_C_ClearQuestIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateOtherSymbolIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdateOtherSymbolIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateOtherSymbolIcon");
		
		UMapWidget_Map_C_UpdateOtherSymbolIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearOtherSymbolIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearOtherSymbolIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearOtherSymbolIcon");
		
		UMapWidget_Map_C_ClearOtherSymbolIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreateTimeSymbolIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCharacterProfileLocationData             LocationData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UMapWidget_CommonSymbolIcon_C*               TargetPosWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPriority                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::CreateTimeSymbolIcon(int32_t InIndex, const struct FSBCharacterProfileLocationData& LocationData, class UMapWidget_CommonSymbolIcon_C* TargetPosWidget, int32_t InPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreateTimeSymbolIcon");
		
		UMapWidget_Map_C_CreateTimeSymbolIcon_Params params {};
		params.InIndex = InIndex;
		params.LocationData = LocationData;
		params.TargetPosWidget = TargetPosWidget;
		params.InPriority = InPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreateCommonSymbolIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Prio                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      TooltipString                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	int32_t UMapWidget_Map_C::CreateCommonSymbolIcon(class UTexture2D* InTexture, int32_t Prio, const struct FVector2D& Pos, const class FString& TooltipString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreateCommonSymbolIcon");
		
		UMapWidget_Map_C_CreateCommonSymbolIcon_Params params {};
		params.InTexture = InTexture;
		params.Prio = Prio;
		params.Pos = Pos;
		params.TooltipString = TooltipString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreateOtherSymbolIconToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLocationInfo                             LocationInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::CreateOtherSymbolIconToLocation(const struct FSBLocationInfo& LocationInfo, const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreateOtherSymbolIconToLocation");
		
		UMapWidget_Map_C_CreateOtherSymbolIconToLocation_Params params {};
		params.LocationInfo = LocationInfo;
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreateOtherSymbolIconToProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterProfileData                     CharcterProfile                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_Map_C::CreateOtherSymbolIconToProfile(const struct FSBCharacterProfileData& CharcterProfile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreateOtherSymbolIconToProfile");
		
		UMapWidget_Map_C_CreateOtherSymbolIconToProfile_Params params {};
		params.CharcterProfile = CharcterProfile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OtherSymbolIconSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_CommonSymbolIcon_C*               IconWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Prio                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OtherSymbolIconSetting(class UMapWidget_CommonSymbolIcon_C* IconWidget, int32_t Prio, const struct FVector2D& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OtherSymbolIconSetting");
		
		UMapWidget_Map_C_OtherSymbolIconSetting_Params params {};
		params.IconWidget = IconWidget;
		params.Prio = Prio;
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateQuestIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdateQuestIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateQuestIcon");
		
		UMapWidget_Map_C_UpdateQuestIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.InitPlayerIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::InitPlayerIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.InitPlayerIcon");
		
		UMapWidget_Map_C_InitPlayerIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.HidePartyMemberIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::HidePartyMemberIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.HidePartyMemberIcon");
		
		UMapWidget_Map_C_HidePartyMemberIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdatePartyMemberIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdatePartyMemberIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdatePartyMemberIcon");
		
		UMapWidget_Map_C_UpdatePartyMemberIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearPartyMemberIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearPartyMemberIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearPartyMemberIcon");
		
		UMapWidget_Map_C_ClearPartyMemberIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreatePartyMemberIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::CreatePartyMemberIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreatePartyMemberIcon");
		
		UMapWidget_Map_C_CreatePartyMemberIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.PlayAnimOut
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::PlayAnimOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.PlayAnimOut");
		
		UMapWidget_Map_C_PlayAnimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.PlayAnimIn
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::PlayAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.PlayAnimIn");
		
		UMapWidget_Map_C_PlayAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.FindPinInfoByPinIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMapPinInfo>                         InPinInfoList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FMapPinInfo                                 InTargetPinInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FMapPinInfo                                 OutPinInfo                                                 (Parm, OutParm)
	 * 		bool                                               OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::FindPinInfoByPinIndex(TArray<struct FMapPinInfo>* InPinInfoList, const struct FMapPinInfo& InTargetPinInfo, struct FMapPinInfo* OutPinInfo, bool* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.FindPinInfoByPinIndex");
		
		UMapWidget_Map_C_FindPinInfoByPinIndex_Params params {};
		params.InTargetPinInfo = InTargetPinInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPinInfoList != nullptr)
			*InPinInfoList = params.InPinInfoList;
		if (OutPinInfo != nullptr)
			*OutPinInfo = params.OutPinInfo;
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.PrintMapPinInfoList
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::PrintMapPinInfoList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.PrintMapPinInfoList");
		
		UMapWidget_Map_C_PrintMapPinInfoList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.DoErasePinnedPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InPinnedPin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::DoErasePinnedPin(class UMapWidget_MapPinnedPin_C* InPinnedPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.DoErasePinnedPin");
		
		UMapWidget_Map_C_DoErasePinnedPin_Params params {};
		params.InPinnedPin = InPinnedPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.DoSavePinInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InPinnedPin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ResetInputMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::DoSavePinInfo(class UMapWidget_MapPinnedPin_C* InPinnedPin, bool ResetInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.DoSavePinInfo");
		
		UMapWidget_Map_C_DoSavePinInfo_Params params {};
		params.InPinnedPin = InPinnedPin;
		params.ResetInputMode = ResetInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.IsSavingMapPinInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSavingMapPinInfo                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::IsSavingMapPinInfo(bool* IsSavingMapPinInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.IsSavingMapPinInfo");
		
		UMapWidget_Map_C_IsSavingMapPinInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSavingMapPinInfo != nullptr)
			*IsSavingMapPinInfo = params.IsSavingMapPinInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetSavingMapPinInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSavingMapPinInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::SetSavingMapPinInfo(bool IsSavingMapPinInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetSavingMapPinInfo");
		
		UMapWidget_Map_C_SetSavingMapPinInfo_Params params {};
		params.IsSavingMapPinInfo = IsSavingMapPinInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoFromBoxIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inPinId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FMapPinInfo                                 OutMapPinInfo                                              (Parm, OutParm)
	 */
	void UMapWidget_Map_C::GetMapPinInfoFromBoxIndex(int32_t inPinId, bool* IsValid, struct FMapPinInfo* OutMapPinInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoFromBoxIndex");
		
		UMapWidget_Map_C_GetMapPinInfoFromBoxIndex_Params params {};
		params.inPinId = inPinId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutMapPinInfo != nullptr)
			*OutMapPinInfo = params.OutMapPinInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateComboBoxPinList
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdateComboBoxPinList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateComboBoxPinList");
		
		UMapWidget_Map_C_UpdateComboBoxPinList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClosePinnedPinCommentBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InPinnedPin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::ClosePinnedPinCommentBox(class UMapWidget_MapPinnedPin_C* InPinnedPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClosePinnedPinCommentBox");
		
		UMapWidget_Map_C_ClosePinnedPinCommentBox_Params params {};
		params.InPinnedPin = InPinnedPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OpenPinnedPinCommentBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InPinnedPin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OpenPinnedPinCommentBox(class UMapWidget_MapPinnedPin_C* InPinnedPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OpenPinnedPinCommentBox");
		
		UMapWidget_Map_C_OpenPinnedPinCommentBox_Params params {};
		params.InPinnedPin = InPinnedPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetMapToPinAttachMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAttachMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::SetMapToPinAttachMode(bool IsAttachMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetMapToPinAttachMode");
		
		UMapWidget_Map_C_SetMapToPinAttachMode_Params params {};
		params.IsAttachMode = IsAttachMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.AttachPinToMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InMapPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMapPinInfo                                 InMapPinInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsTextBoxVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::AttachPinToMap(class UMapWidget_MapPinnedPin_C* InMapPin, const struct FMapPinInfo& InMapPinInfo, bool IsTextBoxVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.AttachPinToMap");
		
		UMapWidget_Map_C_AttachPinToMap_Params params {};
		params.InMapPin = InMapPin;
		params.InMapPinInfo = InMapPinInfo;
		params.IsTextBoxVisible = IsTextBoxVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetPinToMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InPinnedPinRef                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::SetPinToMap(class UMapWidget_MapPinnedPin_C* InPinnedPinRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetPinToMap");
		
		UMapWidget_Map_C_SetPinToMap_Params params {};
		params.InPinnedPinRef = InPinnedPinRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreateMapWidgetMapPinnedPin
	 * 		Flags  -> ()
	 */
	class UMapWidget_MapPinnedPin_C* UMapWidget_Map_C::CreateMapWidgetMapPinnedPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreateMapWidgetMapPinnedPin");
		
		UMapWidget_Map_C_CreateMapWidgetMapPinnedPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearCurrentAreaMapPinnedPin
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearCurrentAreaMapPinnedPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearCurrentAreaMapPinnedPin");
		
		UMapWidget_Map_C_ClearCurrentAreaMapPinnedPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreateCurrentAreaMapPinnedPin
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::CreateCurrentAreaMapPinnedPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreateCurrentAreaMapPinnedPin");
		
		UMapWidget_Map_C_CreateCurrentAreaMapPinnedPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearWorldMapPinnedPin
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearWorldMapPinnedPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearWorldMapPinnedPin");
		
		UMapWidget_Map_C_ClearWorldMapPinnedPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CreateWorldMapPinnedPin
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::CreateWorldMapPinnedPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CreateWorldMapPinnedPin");
		
		UMapWidget_Map_C_CreateWorldMapPinnedPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.InitPinInfo
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::InitPinInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.InitPinInfo");
		
		UMapWidget_Map_C_InitPinInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigFromMapId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBMapBGConfigTableRow                      OutMapBGConfig                                             (Parm, OutParm)
	 */
	void UMapWidget_Map_C::GetMapBGConfigFromMapId(const class FString& InMapId, struct FSBMapBGConfigTableRow* OutMapBGConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigFromMapId");
		
		UMapWidget_Map_C_GetMapBGConfigFromMapId_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMapBGConfig != nullptr)
			*OutMapBGConfig = params.OutMapBGConfig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigFromIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBMapBGConfigTableRow                      OutMapBGConfig                                             (Parm, OutParm)
	 */
	void UMapWidget_Map_C::GetMapBGConfigFromIndex(int32_t InIndex, struct FSBMapBGConfigTableRow* OutMapBGConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigFromIndex");
		
		UMapWidget_Map_C_GetMapBGConfigFromIndex_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMapBGConfig != nullptr)
			*OutMapBGConfig = params.OutMapBGConfig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetMapBodyPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::GetMapBodyPosition(struct FVector2D* OutPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetMapBodyPosition");
		
		UMapWidget_Map_C_GetMapBodyPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetMapBodyPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::SetMapBodyPosition(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetMapBodyPosition");
		
		UMapWidget_Map_C_SetMapBodyPosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.GetMapBodySize
	 * 		Flags  -> ()
	 */
	struct FVector2D UMapWidget_Map_C::GetMapBodySize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.GetMapBodySize");
		
		UMapWidget_Map_C_GetMapBodySize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetMapBodySize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::SetMapBodySize(const struct FVector2D& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetMapBodySize");
		
		UMapWidget_Map_C_SetMapBodySize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CalcWorldPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   MapLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::CalcWorldPosition(const struct FVector2D& MapLocation, struct FVector2D* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CalcWorldPosition");
		
		UMapWidget_Map_C_CalcWorldPosition_Params params {};
		params.MapLocation = MapLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.CalcMapPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   MapLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::CalcMapPosition(const struct FVector2D& WorldLocation, struct FVector2D* MapLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.CalcMapPosition");
		
		UMapWidget_Map_C_CalcMapPosition_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapLocation != nullptr)
			*MapLocation = params.MapLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateWarpPoint
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdateWarpPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateWarpPoint");
		
		UMapWidget_Map_C_UpdateWarpPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearWarpPointIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearWarpPointIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearWarpPointIcon");
		
		UMapWidget_Map_C_ClearWarpPointIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetWorldMapTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::SetWorldMapTexture(const class FString& InMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetWorldMapTexture");
		
		UMapWidget_Map_C_SetWorldMapTexture_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetupAsRegionMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsPlayerCursorVisible                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::SetupAsRegionMap(const class FString& InMapId, bool InIsPlayerCursorVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetupAsRegionMap");
		
		UMapWidget_Map_C_SetupAsRegionMap_Params params {};
		params.InMapId = InMapId;
		params.InIsPlayerCursorVisible = InIsPlayerCursorVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetupAsWorldMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::SetupAsWorldMap(const class FString& InMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetupAsWorldMap");
		
		UMapWidget_Map_C_SetupAsWorldMap_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetupMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsPlayerCursorVisible                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::SetupMap(const class FString& InMapId, bool InIsPlayerCursorVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetupMap");
		
		UMapWidget_Map_C_SetupMap_Params params {};
		params.InMapId = InMapId;
		params.InIsPlayerCursorVisible = InIsPlayerCursorVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetRegionMapTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::SetRegionMapTexture(const class FString& InMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetRegionMapTexture");
		
		UMapWidget_Map_C_SetRegionMapTexture_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ClearIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ClearIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ClearIcon");
		
		UMapWidget_Map_C_ClearIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UpdateTimerEvent
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UpdateTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UpdateTimerEvent");
		
		UMapWidget_Map_C_UpdateTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ResetTimerEvent
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ResetTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ResetTimerEvent");
		
		UMapWidget_Map_C_ResetTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetupTimerEvent
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::SetupTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetupTimerEvent");
		
		UMapWidget_Map_C_SetupTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetupIcon
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::SetupIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetupIcon");
		
		UMapWidget_Map_C_SetupIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.Close
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.Close");
		
		UMapWidget_Map_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.Setup
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.Setup");
		
		UMapWidget_Map_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.Terminate
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::Terminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.Terminate");
		
		UMapWidget_Map_C_Terminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.Initialize
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.Initialize");
		
		UMapWidget_Map_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8");
		
		UMapWidget_Map_C_OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.SetupInterruptQuest
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::SetupInterruptQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.SetupInterruptQuest");
		
		UMapWidget_Map_C_SetupInterruptQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.AddInterruptArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBInterruptQuestInstance*                   InInstance                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::AddInterruptArea(class ASBInterruptQuestInstance* InInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.AddInterruptArea");
		
		UMapWidget_Map_C_AddInterruptArea_Params params {};
		params.InInstance = InInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.RemoveInterruptArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBInterruptQuestInstance*                   InInstance                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::RemoveInterruptArea(class ASBInterruptQuestInstance* InInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.RemoveInterruptArea");
		
		UMapWidget_Map_C_RemoveInterruptArea_Params params {};
		params.InInstance = InInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ResetInterruptQuest
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::ResetInterruptQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ResetInterruptQuest");
		
		UMapWidget_Map_C_ResetInterruptQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnSaveMapPinInfosDelegate_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBMapErrorCode                                    ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnSaveMapPinInfosDelegate_(bool Result, ESBMapErrorCode ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnSaveMapPinInfosDelegate_イベント");
		
		UMapWidget_Map_C_OnSaveMapPinInfosDelegate__Params params {};
		params.Result = Result;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnTextCommitted_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InPinnedPin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnTextCommitted_(class UMapWidget_MapPinnedPin_C* InPinnedPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnTextCommitted_イベント");
		
		UMapWidget_Map_C_OnTextCommitted__Params params {};
		params.InPinnedPin = InPinnedPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnPinBtnClicked_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InPinnedPin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnPinBtnClicked_(class UMapWidget_MapPinnedPin_C* InPinnedPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnPinBtnClicked_イベント");
		
		UMapWidget_Map_C_OnPinBtnClicked__Params params {};
		params.InPinnedPin = InPinnedPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.BindPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::BindPin(class UMapWidget_MapPinnedPin_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.BindPin");
		
		UMapWidget_Map_C_BindPin_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UnbindPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::UnbindPin(class UMapWidget_MapPinnedPin_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UnbindPin");
		
		UMapWidget_Map_C_UnbindPin_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.BindOnSaveMapPinInfos
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::BindOnSaveMapPinInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.BindOnSaveMapPinInfos");
		
		UMapWidget_Map_C_BindOnSaveMapPinInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.UnbindOnSaveMapPinInfos
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::UnbindOnSaveMapPinInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.UnbindOnSaveMapPinInfos");
		
		UMapWidget_Map_C_UnbindOnSaveMapPinInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.BndEvt__AdminBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::BndEvt__AdminBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.BndEvt__AdminBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMapWidget_Map_C_BndEvt__AdminBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.InitAdminBtn
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::InitAdminBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.InitAdminBtn");
		
		UMapWidget_Map_C_InitAdminBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.Construct");
		
		UMapWidget_Map_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.Destruct");
		
		UMapWidget_Map_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnEndYesNoDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnEndYesNoDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnEndYesNoDialog");
		
		UMapWidget_Map_C_OnEndYesNoDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature");
		
		UMapWidget_Map_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.PreConstruct");
		
		UMapWidget_Map_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.InitMapBG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapBGConfigTableRow                      InMapBGConfig                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::InitMapBG(const struct FSBMapBGConfigTableRow& InMapBGConfig, const class FString& InMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.InitMapBG");
		
		UMapWidget_Map_C_InitMapBG_Params params {};
		params.InMapBGConfig = InMapBGConfig;
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");
		
		UMapWidget_Map_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.EventCreateDialog
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::EventCreateDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.EventCreateDialog");
		
		UMapWidget_Map_C_EventCreateDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OpenQuestMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OpenQuestMenu(int32_t InQuestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OpenQuestMenu");
		
		UMapWidget_Map_C_OpenQuestMenu_Params params {};
		params.InQuestId = InQuestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnFinishMenu_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestDetail_FinishStatus                          FinishStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnFinishMenu_2(EQuestDetail_FinishStatus FinishStatus, int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnFinishMenu_2");
		
		UMapWidget_Map_C_OnFinishMenu_2_Params params {};
		params.FinishStatus = FinishStatus;
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.ExecuteUbergraph_MapWidget_Map
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::ExecuteUbergraph_MapWidget_Map(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.ExecuteUbergraph_MapWidget_Map");
		
		UMapWidget_Map_C_ExecuteUbergraph_MapWidget_Map_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnQuestDetailForMapChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Map_C::OnQuestDetailForMapChanged__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnQuestDetailForMapChanged__DelegateSignature");
		
		UMapWidget_Map_C_OnQuestDetailForMapChanged__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnInitPlayerIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   PlayerPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   MapSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnInitPlayerIcon__DelegateSignature(const struct FVector2D& PlayerPosition, const struct FVector2D& MapSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnInitPlayerIcon__DelegateSignature");
		
		UMapWidget_Map_C_OnInitPlayerIcon__DelegateSignature_Params params {};
		params.PlayerPosition = PlayerPosition;
		params.MapSize = MapSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnUpdatePlayerIconPosition__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   MapPosition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ViewScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnUpdatePlayerIconPosition__DelegateSignature(const struct FVector2D& MapPosition, float ViewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnUpdatePlayerIconPosition__DelegateSignature");
		
		UMapWidget_Map_C_OnUpdatePlayerIconPosition__DelegateSignature_Params params {};
		params.MapPosition = MapPosition;
		params.ViewScale = ViewScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnSetMapScrollFunctionOnOff__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsScrollFunctionOn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   InScrollHVLength                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnSetMapScrollFunctionOnOff__DelegateSignature(bool InIsScrollFunctionOn, const struct FVector2D& InScrollHVLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnSetMapScrollFunctionOnOff__DelegateSignature");
		
		UMapWidget_Map_C_OnSetMapScrollFunctionOnOff__DelegateSignature_Params params {};
		params.InIsScrollFunctionOn = InIsScrollFunctionOn;
		params.InScrollHVLength = InScrollHVLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnUpdateTraverseCloud__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::OnUpdateTraverseCloud__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnUpdateTraverseCloud__DelegateSignature");
		
		UMapWidget_Map_C_OnUpdateTraverseCloud__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnWarpPointIconPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::OnWarpPointIconPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnWarpPointIconPressed__DelegateSignature");
		
		UMapWidget_Map_C_OnWarpPointIconPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnResetInputMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::OnResetInputMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnResetInputMode__DelegateSignature");
		
		UMapWidget_Map_C_OnResetInputMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnWarpRequestAccepted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::OnWarpRequestAccepted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnWarpRequestAccepted__DelegateSignature");
		
		UMapWidget_Map_C_OnWarpRequestAccepted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnShowErrorMessage__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InMessageTextId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnShowErrorMessage__DelegateSignature(int32_t InMessageTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnShowErrorMessage__DelegateSignature");
		
		UMapWidget_Map_C_OnShowErrorMessage__DelegateSignature_Params params {};
		params.InMessageTextId = InMessageTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnPinnedPinClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InPinnedPin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnPinnedPinClicked__DelegateSignature(class UMapWidget_MapPinnedPin_C* InPinnedPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnPinnedPinClicked__DelegateSignature");
		
		UMapWidget_Map_C_OnPinnedPinClicked__DelegateSignature_Params params {};
		params.InPinnedPin = InPinnedPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnEndSavePinInfo__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsResultSuccess                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBMapErrorCode                                    ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnEndSavePinInfo__DelegateSignature(bool IsResultSuccess, ESBMapErrorCode ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnEndSavePinInfo__DelegateSignature");
		
		UMapWidget_Map_C_OnEndSavePinInfo__DelegateSignature_Params params {};
		params.IsResultSuccess = IsResultSuccess;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnStartSavePinInfo__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::OnStartSavePinInfo__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnStartSavePinInfo__DelegateSignature");
		
		UMapWidget_Map_C_OnStartSavePinInfo__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnMapPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_Map_C::OnMapPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnMapPressed__DelegateSignature");
		
		UMapWidget_Map_C_OnMapPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Map.MapWidget_Map_C.OnChangeToRegionMap__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InRegionMapId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Map_C::OnChangeToRegionMap__DelegateSignature(const class FString& InRegionMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Map.MapWidget_Map_C.OnChangeToRegionMap__DelegateSignature");
		
		UMapWidget_Map_C_OnChangeToRegionMap__DelegateSignature_Params params {};
		params.InRegionMapId = InRegionMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_Map_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_Map_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_Map.MapWidget_Map_C");
		return ptr;
	}

}


