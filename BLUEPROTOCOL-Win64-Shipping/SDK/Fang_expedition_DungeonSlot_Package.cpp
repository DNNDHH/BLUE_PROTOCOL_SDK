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
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetBtn_Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BtnSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DungeonSlot_C::SetBtn_Selected(bool BtnSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetBtn_Selected");
		
		UFang_expedition_DungeonSlot_C_SetBtn_Selected_Params params {};
		params.BtnSelected = BtnSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetPlayData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionPlayData                  PlayData_                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonSlot_C::SetPlayData(const struct FSBFang_expeditionPlayData& PlayData_, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetPlayData");
		
		UFang_expedition_DungeonSlot_C_SetPlayData_Params params {};
		params.PlayData_ = PlayData_;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetSlotType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonSlot_C::SetSlotType(int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetSlotType");
		
		UFang_expedition_DungeonSlot_C_SetSlotType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Finish
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonSlot_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Finish");
		
		UFang_expedition_DungeonSlot_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Initialize
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonSlot_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Initialize");
		
		UFang_expedition_DungeonSlot_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetAreaData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData_                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonSlot_C::SetAreaData(const struct FSBFang_expeditionAreaData& AreaData_, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetAreaData");
		
		UFang_expedition_DungeonSlot_C_SetAreaData_Params params {};
		params.AreaData_ = AreaData_;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Construct");
		
		UFang_expedition_DungeonSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.CB_ExpeditionSlotSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonSlot_C::CB_ExpeditionSlotSelect(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.CB_ExpeditionSlotSelect");
		
		UFang_expedition_DungeonSlot_C_CB_ExpeditionSlotSelect_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonSlot_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Destruct");
		
		UFang_expedition_DungeonSlot_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonSlot_C::BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UFang_expedition_DungeonSlot_C_BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonSlot_C::BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UFang_expedition_DungeonSlot_C_BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.ExecuteUbergraph_Fang_expedition_DungeonSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonSlot_C::ExecuteUbergraph_Fang_expedition_DungeonSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.ExecuteUbergraph_Fang_expedition_DungeonSlot");
		
		UFang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.OnSelect_Standby__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonSlot_C::OnSelect_Standby__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.OnSelect_Standby__DelegateSignature");
		
		UFang_expedition_DungeonSlot_C_OnSelect_Standby__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.OnSelect_Expedition__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_DungeonSlot_C::OnSelect_Expedition__DelegateSignature(int32_t Index, const struct FSBFang_expeditionPlayData& PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.OnSelect_Expedition__DelegateSignature");
		
		UFang_expedition_DungeonSlot_C_OnSelect_Expedition__DelegateSignature_Params params {};
		params.Index = Index;
		params.PlayData = PlayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DungeonSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DungeonSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C");
		return ptr;
	}

}


