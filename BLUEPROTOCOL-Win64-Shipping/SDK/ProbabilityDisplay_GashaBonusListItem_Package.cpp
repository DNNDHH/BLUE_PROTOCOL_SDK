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
	 * 		Name   -> Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBRewardItemType                                  ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Requirement                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Limit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsStepUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProbabilityDisplay_GashaBonusListItem_C::Setup(int32_t ItemIndex, ESBRewardItemType ItemType, const class FString& Requirement, int32_t Index, int32_t Amount, int32_t Limit, bool IsStepUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Setup");
		
		UProbabilityDisplay_GashaBonusListItem_C_Setup_Params params {};
		params.ItemIndex = ItemIndex;
		params.ItemType = ItemType;
		params.Requirement = Requirement;
		params.Index = Index;
		params.Amount = Amount;
		params.Limit = Limit;
		params.IsStepUp = IsStepUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.OnClose_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_GashaBonusListItem_C::OnClose_Event(class UUMG_ProductDetailMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.OnClose_Event");
		
		UProbabilityDisplay_GashaBonusListItem_C_OnClose_Event_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_GashaBonusListItem_C::BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UProbabilityDisplay_GashaBonusListItem_C_BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UProbabilityDisplay_GashaBonusListItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Destruct");
		
		UProbabilityDisplay_GashaBonusListItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UProbabilityDisplay_GashaBonusListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Construct");
		
		UProbabilityDisplay_GashaBonusListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_GashaBonusListItem_C::ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem");
		
		UProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProbabilityDisplay_GashaBonusListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProbabilityDisplay_GashaBonusListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C");
		return ptr;
	}

}


