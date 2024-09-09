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
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.PlaySlotAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonGroup_C::PlaySlotAnimation(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.PlaySlotAnimation");
		
		UFang_expedition_DungeonGroup_C_PlaySlotAnimation_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetBtn_Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonGroup_C::SetBtn_Selected(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetBtn_Selected");
		
		UFang_expedition_DungeonGroup_C_SetBtn_Selected_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetSlotType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonGroup_C::SetSlotType(int32_t Index, int32_t SlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetSlotType");
		
		UFang_expedition_DungeonGroup_C_SetSlotType_Params params {};
		params.Index = Index;
		params.SlotType = SlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Finish
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonGroup_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Finish");
		
		UFang_expedition_DungeonGroup_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Initialize
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonGroup_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Initialize");
		
		UFang_expedition_DungeonGroup_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NowPoint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxPoint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonGroup_C::SetGauge(int32_t Index, int32_t NowPoint, int32_t MaxPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetGauge");
		
		UFang_expedition_DungeonGroup_C_SetGauge_Params params {};
		params.Index = Index;
		params.NowPoint = NowPoint;
		params.MaxPoint = MaxPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetPlayData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_DungeonGroup_C::SetPlayData(int32_t SlotIndex, const struct FSBFang_expeditionPlayData& PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetPlayData");
		
		UFang_expedition_DungeonGroup_C_SetPlayData_Params params {};
		params.SlotIndex = SlotIndex;
		params.PlayData = PlayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_TicketButtonClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonGroup_C::CB_TicketButtonClick(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_TicketButtonClick");
		
		UFang_expedition_DungeonGroup_C_CB_TicketButtonClick_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonGroup_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Destruct");
		
		UFang_expedition_DungeonGroup_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_PressExpeditionButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_DungeonGroup_C::CB_PressExpeditionButton(int32_t Index, const struct FSBFang_expeditionPlayData& PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_PressExpeditionButton");
		
		UFang_expedition_DungeonGroup_C_CB_PressExpeditionButton_Params params {};
		params.Index = Index;
		params.PlayData = PlayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_PressStandbyButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonGroup_C::CB_PressStandbyButton(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_PressStandbyButton");
		
		UFang_expedition_DungeonGroup_C_CB_PressStandbyButton_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_SlotAnimationFinish
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonGroup_C::CB_SlotAnimationFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_SlotAnimationFinish");
		
		UFang_expedition_DungeonGroup_C_CB_SlotAnimationFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.ExecuteUbergraph_Fang_expedition_DungeonGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonGroup_C::ExecuteUbergraph_Fang_expedition_DungeonGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.ExecuteUbergraph_Fang_expedition_DungeonGroup");
		
		UFang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnAnimationFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonGroup_C::OnAnimationFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnAnimationFinish__DelegateSignature");
		
		UFang_expedition_DungeonGroup_C_OnAnimationFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnPressStandby__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonGroup_C::OnPressStandby__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnPressStandby__DelegateSignature");
		
		UFang_expedition_DungeonGroup_C_OnPressStandby__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnPressExpedition__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_DungeonGroup_C::OnPressExpedition__DelegateSignature(int32_t Index, const struct FSBFang_expeditionPlayData& PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnPressExpedition__DelegateSignature");
		
		UFang_expedition_DungeonGroup_C_OnPressExpedition__DelegateSignature_Params params {};
		params.Index = Index;
		params.PlayData = PlayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnTicketButtonClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonGroup_C::OnTicketButtonClick__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnTicketButtonClick__DelegateSignature");
		
		UFang_expedition_DungeonGroup_C_OnTicketButtonClick__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DungeonGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DungeonGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C");
		return ptr;
	}

}


