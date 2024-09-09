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
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.UpdateMapIconNewMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapWindow_C::UpdateMapIconNewMark(const class FString& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.UpdateMapIconNewMark");
		
		UFang_expedition_MapWindow_C_UpdateMapIconNewMark_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnPaint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UFang_expedition_MapWindow_C::OnPaint(struct FPaintContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnPaint");
		
		UFang_expedition_MapWindow_C_OnPaint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetCloudPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TraverseName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UCanvasPanelSlot*                            CanvasSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapWindow_C::SetCloudPosition(const class FString& TraverseName, class UCanvasPanelSlot* CanvasSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetCloudPosition");
		
		UFang_expedition_MapWindow_C_SetCloudPosition_Params params {};
		params.TraverseName = TraverseName;
		params.CanvasSlot = CanvasSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetIconPositionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanelSlot*                            CanvasSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapWindow_C::SetIconPositionData(class UCanvasPanelSlot* CanvasSlot, const struct FVector2D& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetIconPositionData");
		
		UFang_expedition_MapWindow_C_SetIconPositionData_Params params {};
		params.CanvasSlot = CanvasSlot;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.ClearIcon
	 * 		Flags  -> ()
	 */
	void UFang_expedition_MapWindow_C::ClearIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.ClearIcon");
		
		UFang_expedition_MapWindow_C_ClearIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetExpeditionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Field                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionData                      ExpeditionData                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_MapWindow_C::SetExpeditionData(const class FString& Field, struct FSBFang_expeditionData* ExpeditionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetExpeditionData");
		
		UFang_expedition_MapWindow_C_SetExpeditionData_Params params {};
		params.Field = Field;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExpeditionData != nullptr)
			*ExpeditionData = params.ExpeditionData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetMapId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapWindow_C::SetMapId(const class FString& MapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetMapId");
		
		UFang_expedition_MapWindow_C_SetMapId_Params params {};
		params.MapId = MapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_MapWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.Construct");
		
		UFang_expedition_MapWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.IconClickWork
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapWindow_C::IconClickWork(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.IconClickWork");
		
		UFang_expedition_MapWindow_C_IconClickWork_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_MapWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.Destruct");
		
		UFang_expedition_MapWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.BndEvt__Fang_expedition_MapWindow_DebugButton1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_MapWindow_C::BndEvt__Fang_expedition_MapWindow_DebugButton1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.BndEvt__Fang_expedition_MapWindow_DebugButton1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UFang_expedition_MapWindow_C_BndEvt__Fang_expedition_MapWindow_DebugButton1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.IconGroupClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapWindow_C::IconGroupClick(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.IconGroupClick");
		
		UFang_expedition_MapWindow_C_IconGroupClick_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.ExecuteUbergraph_Fang_expedition_MapWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapWindow_C::ExecuteUbergraph_Fang_expedition_MapWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.ExecuteUbergraph_Fang_expedition_MapWindow");
		
		UFang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnMapIconGroupClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionIconData                  IconData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_MapWindow_C::OnMapIconGroupClick__DelegateSignature(const struct FSBFang_expeditionIconData& IconData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnMapIconGroupClick__DelegateSignature");
		
		UFang_expedition_MapWindow_C_OnMapIconGroupClick__DelegateSignature_Params params {};
		params.IconData = IconData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnMapIconClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapWindow_C::OnMapIconClick__DelegateSignature(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnMapIconClick__DelegateSignature");
		
		UFang_expedition_MapWindow_C_OnMapIconClick__DelegateSignature_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_MapWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_MapWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_MapWindow.Fang_expedition_MapWindow_C");
		return ptr;
	}

}


