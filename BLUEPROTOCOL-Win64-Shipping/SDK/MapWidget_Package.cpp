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
	 * 		Name   -> Function MapWidget.MapWidget_C.TermRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubMenuTermReason                                 InReason                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESubMenuTermRequestReply UMapWidget_C::TermRequest(ESubMenuTermReason InReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.TermRequest");
		
		UMapWidget_C_TermRequest_Params params {};
		params.InReason = InReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.CheckMapInTemple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_C::CheckMapInTemple(bool* OutParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.CheckMapInTemple");
		
		UMapWidget_C_CheckMapInTemple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutParam != nullptr)
			*OutParam = params.OutParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.CalcPinWorldPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPinnedLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UMapWidget_C::CalcPinWorldPosition(const struct FVector2D& InPinnedLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.CalcPinWorldPosition");
		
		UMapWidget_C_CalcPinWorldPosition_Params params {};
		params.InPinnedLocation = InPinnedLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.EXSettingMapCheck
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::EXSettingMapCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.EXSettingMapCheck");
		
		UMapWidget_C_EXSettingMapCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.SetupMapDefaultScroll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   MapSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::SetupMapDefaultScroll(const struct FVector2D& Position, const struct FVector2D& MapSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.SetupMapDefaultScroll");
		
		UMapWidget_C_SetupMapDefaultScroll_Params params {};
		params.Position = Position;
		params.MapSize = MapSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.UpdateMapName
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::UpdateMapName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.UpdateMapName");
		
		UMapWidget_C_UpdateMapName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.PublicDungeonCheck
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::PublicDungeonCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.PublicDungeonCheck");
		
		UMapWidget_C_PublicDungeonCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.GetZoneDBZoneIdFromRowName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InRowName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        OutZoneId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::GetZoneDBZoneIdFromRowName(const class FName& InRowName, bool* OutIsValid, class FName* OutZoneId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.GetZoneDBZoneIdFromRowName");
		
		UMapWidget_C_GetZoneDBZoneIdFromRowName_Params params {};
		params.InRowName = InRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutZoneId != nullptr)
			*OutZoneId = params.OutZoneId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.GetZoneDBRowNameFromZoneId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InZoneId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        OutRowName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::GetZoneDBRowNameFromZoneId(const class FString& InZoneId, bool* OutIsValid, class FName* OutRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.GetZoneDBRowNameFromZoneId");
		
		UMapWidget_C_GetZoneDBRowNameFromZoneId_Params params {};
		params.InZoneId = InZoneId;
		
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
	 * 		Name   -> Function MapWidget.MapWidget_C.GetIsRmShopDisplayed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsRmShopDisplayed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_C::GetIsRmShopDisplayed(bool* OutIsRmShopDisplayed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.GetIsRmShopDisplayed");
		
		UMapWidget_C_GetIsRmShopDisplayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsRmShopDisplayed != nullptr)
			*OutIsRmShopDisplayed = params.OutIsRmShopDisplayed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.GetTopMapIdByDividedZoneId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      OutTopMapId                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::GetTopMapIdByDividedZoneId(const class FString& InMapId, class FString* OutTopMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.GetTopMapIdByDividedZoneId");
		
		UMapWidget_C_GetTopMapIdByDividedZoneId_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTopMapId != nullptr)
			*OutTopMapId = params.OutTopMapId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.CheckIfMapIsDividedZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OutMapIsDividedZone                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_C::CheckIfMapIsDividedZone(const class FString& InMapId, bool* OutMapIsDividedZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.CheckIfMapIsDividedZone");
		
		UMapWidget_C_CheckIfMapIsDividedZone_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMapIsDividedZone != nullptr)
			*OutMapIsDividedZone = params.OutMapIsDividedZone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.CheckIfMapHasDividedZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OutMapHasDividedZones                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_C::CheckIfMapHasDividedZone(const class FString& InMapId, bool* OutMapHasDividedZones)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.CheckIfMapHasDividedZone");
		
		UMapWidget_C_CheckIfMapHasDividedZone_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMapHasDividedZones != nullptr)
			*OutMapHasDividedZones = params.OutMapHasDividedZones;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.TraverseUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Floor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::TraverseUpdate(const class FString& InMapId, int32_t Floor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.TraverseUpdate");
		
		UMapWidget_C_TraverseUpdate_Params params {};
		params.InMapId = InMapId;
		params.Floor = Floor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.IsMapListAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapBGConfigTableRow                      CheckMap                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsAdd                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_C::IsMapListAdd(struct FSBMapBGConfigTableRow* CheckMap, bool* IsAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.IsMapListAdd");
		
		UMapWidget_C_IsMapListAdd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CheckMap != nullptr)
			*CheckMap = params.CheckMap;
		if (IsAdd != nullptr)
			*IsAdd = params.IsAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.GetWorldMapId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutId                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::GetWorldMapId(class FString* OutId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.GetWorldMapId");
		
		UMapWidget_C_GetWorldMapId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutId != nullptr)
			*OutId = params.OutId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.SetupWarpPointDropDownList
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::SetupWarpPointDropDownList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.SetupWarpPointDropDownList");
		
		UMapWidget_C_SetupWarpPointDropDownList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.SetupPinDropDownList
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::SetupPinDropDownList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.SetupPinDropDownList");
		
		UMapWidget_C_SetupPinDropDownList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.SetupMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsWorldMap                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsSelectedByDividedZoneList                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_C::SetupMap(const class FString& InMapId, bool InIsWorldMap, bool InIsSelectedByDividedZoneList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.SetupMap");
		
		UMapWidget_C_SetupMap_Params params {};
		params.InMapId = InMapId;
		params.InIsWorldMap = InIsWorldMap;
		params.InIsSelectedByDividedZoneList = InIsSelectedByDividedZoneList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.GetCurrentMapId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsWorldMap                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OutMapId                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsSubLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OutSubLevelId                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::GetCurrentMapId(bool InIsWorldMap, class FString* OutMapId, bool* OutIsSubLevel, class FString* OutSubLevelId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.GetCurrentMapId");
		
		UMapWidget_C_GetCurrentMapId_Params params {};
		params.InIsWorldMap = InIsWorldMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMapId != nullptr)
			*OutMapId = params.OutMapId;
		if (OutIsSubLevel != nullptr)
			*OutIsSubLevel = params.OutIsSubLevel;
		if (OutSubLevelId != nullptr)
			*OutSubLevelId = params.OutSubLevelId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.SetupMapList
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::SetupMapList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.SetupMapList");
		
		UMapWidget_C_SetupMapList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.CloseMapWidget
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::CloseMapWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.CloseMapWidget");
		
		UMapWidget_C_CloseMapWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.TickForMapScroll
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::TickForMapScroll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.TickForMapScroll");
		
		UMapWidget_C_TickForMapScroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_1_OnMouseCaptureBegin__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_1_OnMouseCaptureBegin__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_1_OnMouseCaptureBegin__DelegateSignature");
		
		UMapWidget_C_BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_1_OnMouseCaptureBegin__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_2_OnMouseCaptureEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_2_OnMouseCaptureEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_2_OnMouseCaptureEnd__DelegateSignature");
		
		UMapWidget_C_BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_2_OnMouseCaptureEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnPlayerViewScroll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   IconPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ViewScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::OnPlayerViewScroll(const struct FVector2D& IconPosition, float ViewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnPlayerViewScroll");
		
		UMapWidget_C_OnPlayerViewScroll_Params params {};
		params.IconPosition = IconPosition;
		params.ViewScale = ViewScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnDefaultScrollSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   PlayerPos                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   FieldSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::OnDefaultScrollSetting(const struct FVector2D& PlayerPos, const struct FVector2D& FieldSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnDefaultScrollSetting");
		
		UMapWidget_C_OnDefaultScrollSetting_Params params {};
		params.PlayerPos = PlayerPos;
		params.FieldSize = FieldSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnUpdateTraverseCloudEvent
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::OnUpdateTraverseCloudEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnUpdateTraverseCloudEvent");
		
		UMapWidget_C_OnUpdateTraverseCloudEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__MapBtn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::BndEvt__MapBtn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__MapBtn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature");
		
		UMapWidget_C_BndEvt__MapBtn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.CloseVisitedMapList
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::CloseVisitedMapList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.CloseVisitedMapList");
		
		UMapWidget_C_CloseVisitedMapList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__DividedZoneList_K2Node_ComponentBoundEvent_0_OnListItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InDividedZoneId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::BndEvt__DividedZoneList_K2Node_ComponentBoundEvent_0_OnListItemClicked__DelegateSignature(const class FString& InDividedZoneId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__DividedZoneList_K2Node_ComponentBoundEvent_0_OnListItemClicked__DelegateSignature");
		
		UMapWidget_C_BndEvt__DividedZoneList_K2Node_ComponentBoundEvent_0_OnListItemClicked__DelegateSignature_Params params {};
		params.InDividedZoneId = InDividedZoneId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_1_OnListItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_1_OnListItemClicked__DelegateSignature(const class FString& InMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_1_OnListItemClicked__DelegateSignature");
		
		UMapWidget_C_BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_1_OnListItemClicked__DelegateSignature_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature");
		
		UMapWidget_C_BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.Construct");
		
		UMapWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.Destruct");
		
		UMapWidget_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.Init
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.Init");
		
		UMapWidget_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnChangeMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsWorldMap                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_C::OnChangeMap(const class FString& InMapId, bool InIsWorldMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnChangeMap");
		
		UMapWidget_C_OnChangeMap_Params params {};
		params.InMapId = InMapId;
		params.InIsWorldMap = InIsWorldMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnChangeToRegionMap_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InRegionMapId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::OnChangeToRegionMap_(const class FString& InRegionMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnChangeToRegionMap_イベント");
		
		UMapWidget_C_OnChangeToRegionMap__Params params {};
		params.InRegionMapId = InRegionMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnFuncIconSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapFuncIconType                                   InSelectedFuncIconType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::OnFuncIconSelected(EMapFuncIconType InSelectedFuncIconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnFuncIconSelected");
		
		UMapWidget_C_OnFuncIconSelected_Params params {};
		params.InSelectedFuncIconType = InSelectedFuncIconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_0_OnSliderVValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_0_OnSliderVValueChanged__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_0_OnSliderVValueChanged__DelegateSignature");
		
		UMapWidget_C_BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_0_OnSliderVValueChanged__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_6_OnSliderHValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_6_OnSliderHValueChanged__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_6_OnSliderHValueChanged__DelegateSignature");
		
		UMapWidget_C_BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_6_OnSliderHValueChanged__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnSetMapScrollFunctionOnOffEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsScrollFunctionOn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   InScrollHVLength                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::OnSetMapScrollFunctionOnOffEvent(bool InIsScrollFunctionOn, const struct FVector2D& InScrollHVLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnSetMapScrollFunctionOnOffEvent");
		
		UMapWidget_C_OnSetMapScrollFunctionOnOffEvent_Params params {};
		params.InIsScrollFunctionOn = InIsScrollFunctionOn;
		params.InScrollHVLength = InScrollHVLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnSubMenuUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MainPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::OnSubMenuUpdate(int32_t MainPage, int32_t SubPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnSubMenuUpdate");
		
		UMapWidget_C_OnSubMenuUpdate_Params params {};
		params.MainPage = MainPage;
		params.SubPage = SubPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnSameMenuBookmarkAccessNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBookMarkType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnSameMenuBookmarkAccessNew");
		
		UMapWidget_C_OnSameMenuBookmarkAccessNew_Params params {};
		params.InBookMarkType = InBookMarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnRMShopClosed
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::OnRMShopClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnRMShopClosed");
		
		UMapWidget_C_OnRMShopClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnParentTerm
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::OnParentTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnParentTerm");
		
		UMapWidget_C_OnParentTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnMapPressed_イベント
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::OnMapPressed_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnMapPressed_イベント");
		
		UMapWidget_C_OnMapPressed__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnStartSavePinInfo_イベント
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::OnStartSavePinInfo_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnStartSavePinInfo_イベント");
		
		UMapWidget_C_OnStartSavePinInfo__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.UpdatePinBox
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::UpdatePinBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.UpdatePinBox");
		
		UMapWidget_C_UpdatePinBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnPinnedPinClicked_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InPinnedPin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::OnPinnedPinClicked_(class UMapWidget_MapPinnedPin_C* InPinnedPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnPinnedPinClicked_イベント");
		
		UMapWidget_C_OnPinnedPinClicked__Params params {};
		params.InPinnedPin = InPinnedPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.StartShowErrorMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InMessageTextId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::StartShowErrorMessage(int32_t InMessageTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.StartShowErrorMessage");
		
		UMapWidget_C_StartShowErrorMessage_Params params {};
		params.InMessageTextId = InMessageTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.EndShowErrorMessage
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::EndShowErrorMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.EndShowErrorMessage");
		
		UMapWidget_C_EndShowErrorMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__MenuItemButtonList_K2Node_ComponentBoundEvent_67_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::BndEvt__MenuItemButtonList_K2Node_ComponentBoundEvent_67_OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__MenuItemButtonList_K2Node_ComponentBoundEvent_67_OnClick__DelegateSignature");
		
		UMapWidget_C_BndEvt__MenuItemButtonList_K2Node_ComponentBoundEvent_67_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.DoChangeMapTypeSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWorldMap                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_C::DoChangeMapTypeSelected(bool IsWorldMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.DoChangeMapTypeSelected");
		
		UMapWidget_C_DoChangeMapTypeSelected_Params params {};
		params.IsWorldMap = IsWorldMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnAnimationFinished");
		
		UMapWidget_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__PinBox_K2Node_ComponentBoundEvent_88_OnItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSelectedItemName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSelectedItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::BndEvt__PinBox_K2Node_ComponentBoundEvent_88_OnItemSelected__DelegateSignature(const class FString& InSelectedItemName, int32_t InSelectedItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__PinBox_K2Node_ComponentBoundEvent_88_OnItemSelected__DelegateSignature");
		
		UMapWidget_C_BndEvt__PinBox_K2Node_ComponentBoundEvent_88_OnItemSelected__DelegateSignature_Params params {};
		params.InSelectedItemName = InSelectedItemName;
		params.InSelectedItemId = InSelectedItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__WarpBox_K2Node_ComponentBoundEvent_96_OnItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSelectedItemName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSelectedItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::BndEvt__WarpBox_K2Node_ComponentBoundEvent_96_OnItemSelected__DelegateSignature(const class FString& InSelectedItemName, int32_t InSelectedItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__WarpBox_K2Node_ComponentBoundEvent_96_OnItemSelected__DelegateSignature");
		
		UMapWidget_C_BndEvt__WarpBox_K2Node_ComponentBoundEvent_96_OnItemSelected__DelegateSignature_Params params {};
		params.InSelectedItemName = InSelectedItemName;
		params.InSelectedItemId = InSelectedItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnWarpRequestAccepted_イベント
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::OnWarpRequestAccepted_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnWarpRequestAccepted_イベント");
		
		UMapWidget_C_OnWarpRequestAccepted__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.ResetInputModeToMapWidget
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::ResetInputModeToMapWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.ResetInputModeToMapWidget");
		
		UMapWidget_C_ResetInputModeToMapWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.ChangeMouseCursorType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapPinType                                        InMapPinType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::ChangeMouseCursorType(EMapPinType InMapPinType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.ChangeMouseCursorType");
		
		UMapWidget_C_ChangeMouseCursorType_Params params {};
		params.InMapPinType = InMapPinType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.ResetMouseCursorTypeToDefault
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::ResetMouseCursorTypeToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.ResetMouseCursorTypeToDefault");
		
		UMapWidget_C_ResetMouseCursorTypeToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__PinBox_K2Node_ComponentBoundEvent_4_OnListBoxOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::BndEvt__PinBox_K2Node_ComponentBoundEvent_4_OnListBoxOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__PinBox_K2Node_ComponentBoundEvent_4_OnListBoxOpened__DelegateSignature");
		
		UMapWidget_C_BndEvt__PinBox_K2Node_ComponentBoundEvent_4_OnListBoxOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__WarpBox_K2Node_ComponentBoundEvent_10_OnListBoxOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::BndEvt__WarpBox_K2Node_ComponentBoundEvent_10_OnListBoxOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__WarpBox_K2Node_ComponentBoundEvent_10_OnListBoxOpened__DelegateSignature");
		
		UMapWidget_C_BndEvt__WarpBox_K2Node_ComponentBoundEvent_10_OnListBoxOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnWarpPointIconPressed_イベント
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::OnWarpPointIconPressed_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnWarpPointIconPressed_イベント");
		
		UMapWidget_C_OnWarpPointIconPressed__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnEndSavePinInfo_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsResultSuccess                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBMapErrorCode                                    ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::OnEndSavePinInfo_(bool IsResultSuccess, ESBMapErrorCode ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnEndSavePinInfo_イベント");
		
		UMapWidget_C_OnEndSavePinInfo__Params params {};
		params.IsResultSuccess = IsResultSuccess;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__PinBox_K2Node_ComponentBoundEvent_1_OnListBoxClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::BndEvt__PinBox_K2Node_ComponentBoundEvent_1_OnListBoxClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__PinBox_K2Node_ComponentBoundEvent_1_OnListBoxClosed__DelegateSignature");
		
		UMapWidget_C_BndEvt__PinBox_K2Node_ComponentBoundEvent_1_OnListBoxClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BndEvt__WarpBox_K2Node_ComponentBoundEvent_2_OnListBoxClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::BndEvt__WarpBox_K2Node_ComponentBoundEvent_2_OnListBoxClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BndEvt__WarpBox_K2Node_ComponentBoundEvent_2_OnListBoxClosed__DelegateSignature");
		
		UMapWidget_C_BndEvt__WarpBox_K2Node_ComponentBoundEvent_2_OnListBoxClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnPinBoxPinIconSelected_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapPinType                                        InSelectedPinType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::OnPinBoxPinIconSelected_(EMapPinType InSelectedPinType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnPinBoxPinIconSelected_イベント");
		
		UMapWidget_C_OnPinBoxPinIconSelected__Params params {};
		params.InSelectedPinType = InSelectedPinType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.UpdateMarkerPin
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::UpdateMarkerPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.UpdateMarkerPin");
		
		UMapWidget_C_UpdateMarkerPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.ResetMouseCursorTypeToDefaultRequest
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::ResetMouseCursorTypeToDefaultRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.ResetMouseCursorTypeToDefaultRequest");
		
		UMapWidget_C_ResetMouseCursorTypeToDefaultRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.BookmarkUpdateRequest
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::BookmarkUpdateRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.BookmarkUpdateRequest");
		
		UMapWidget_C_BookmarkUpdateRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.UpdateBookmarkStatusButton
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::UpdateBookmarkStatusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.UpdateBookmarkStatusButton");
		
		UMapWidget_C_UpdateBookmarkStatusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.PreConstruct");
		
		UMapWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.Tick");
		
		UMapWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnQuestDetailForMapChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_C::OnQuestDetailForMapChanged(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnQuestDetailForMapChanged");
		
		UMapWidget_C_OnQuestDetailForMapChanged_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.ExecuteUbergraph_MapWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_C::ExecuteUbergraph_MapWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.ExecuteUbergraph_MapWidget");
		
		UMapWidget_C_ExecuteUbergraph_MapWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget.MapWidget_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget.MapWidget_C.OnClose__DelegateSignature");
		
		UMapWidget_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget.MapWidget_C");
		return ptr;
	}

}


