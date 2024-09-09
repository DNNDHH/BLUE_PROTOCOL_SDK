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
	 * 		Name   -> Function BP_BalloonComponent.BP_BalloonComponent_C.Show_Extend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class ACharacter*                                  InAttachCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InAttachTransformName                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAutoCloseTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BalloonComponent_C::Show_Extend(const class FString& InText, class ACharacter* InAttachCharacter, const class FName& InAttachTransformName, float InAutoCloseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BalloonComponent.BP_BalloonComponent_C.Show_Extend");
		
		UBP_BalloonComponent_C_Show_Extend_Params params {};
		params.InText = InText;
		params.InAttachCharacter = InAttachCharacter;
		params.InAttachTransformName = InAttachTransformName;
		params.InAutoCloseTime = InAutoCloseTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BalloonComponent.BP_BalloonComponent_C.OnRemove_Event_1
	 * 		Flags  -> ()
	 */
	void UBP_BalloonComponent_C::OnRemove_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BalloonComponent.BP_BalloonComponent_C.OnRemove_Event_1");
		
		UBP_BalloonComponent_C_OnRemove_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BalloonComponent.BP_BalloonComponent_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class ACharacter*                                  InAttachCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BalloonComponent_C::Show(const class FString& InText, class ACharacter* InAttachCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BalloonComponent.BP_BalloonComponent_C.Show");
		
		UBP_BalloonComponent_C_Show_Params params {};
		params.InText = InText;
		params.InAttachCharacter = InAttachCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BalloonComponent.BP_BalloonComponent_C.Hide
	 * 		Flags  -> ()
	 */
	void UBP_BalloonComponent_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BalloonComponent.BP_BalloonComponent_C.Hide");
		
		UBP_BalloonComponent_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BalloonComponent.BP_BalloonComponent_C.ExecuteUbergraph_BP_BalloonComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BalloonComponent_C::ExecuteUbergraph_BP_BalloonComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BalloonComponent.BP_BalloonComponent_C.ExecuteUbergraph_BP_BalloonComponent");
		
		UBP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BalloonComponent.BP_BalloonComponent_C.ChangeBalloonVisible__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVsiible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_BalloonComponent_C::ChangeBalloonVisible__DelegateSignature(bool bVsiible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BalloonComponent.BP_BalloonComponent_C.ChangeBalloonVisible__DelegateSignature");
		
		UBP_BalloonComponent_C_ChangeBalloonVisible__DelegateSignature_Params params {};
		params.bVsiible = bVsiible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BalloonComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BalloonComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BalloonComponent.BP_BalloonComponent_C");
		return ptr;
	}

}


