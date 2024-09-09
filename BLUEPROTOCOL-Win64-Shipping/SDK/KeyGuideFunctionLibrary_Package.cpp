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
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeChangeLockText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad2_MakeChangeLockText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeChangeLockText");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_GetVerticalChildWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UWidget*>                             Out                                                        (Parm, OutParm, ContainsInstancedReference)
	 */
	void UKeyGuideFunctionLibrary_C::KeyGuide_GetVerticalChildWidget(class UPanelWidget* , class UObject* __WorldContext, TArray<class UWidget*>* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_GetVerticalChildWidget");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget_Params params {};
		params. = ;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_GetPareItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWidget*>                             InAllChildren                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class USBRuntimeTextBlock*>                 outActionTextArray                                         (Parm, OutParm, ContainsInstancedReference)
	 * 		TArray<ESBKeyConfigAction>                         outActionConfigArray                                       (Parm, OutParm)
	 */
	void UKeyGuideFunctionLibrary_C::KeyGuide_GetPareItems(TArray<class UWidget*>* InAllChildren, class UObject* __WorldContext, TArray<class USBRuntimeTextBlock*>* outActionTextArray, TArray<ESBKeyConfigAction>* outActionConfigArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_GetPareItems");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_GetPareItems_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InAllChildren != nullptr)
			*InAllChildren = params.InAllChildren;
		if (outActionTextArray != nullptr)
			*outActionTextArray = params.outActionTextArray;
		if (outActionConfigArray != nullptr)
			*outActionConfigArray = params.outActionConfigArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.Key Guide Mouse 2 Make Oriento Camera Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UTextBlock*                                  InTextObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuideFunctionLibrary_C::KeyGuideMouse2MakeOrientoCameraText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UTextBlock* InTextObject, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.Key Guide Mouse 2 Make Oriento Camera Text");
		
		UKeyGuideFunctionLibrary_C_KeyGuideMouse2MakeOrientoCameraText_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.InTextObject = InTextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_MakeMovesText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UTextBlock*                                  TextObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuideFunctionLibrary_C::KeyGuide_Mouse2_MakeMovesText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UTextBlock* TextObject, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_MakeMovesText");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.TextObject = TextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_GetKeytoTextString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UKeyGuideFunctionLibrary_C::KeyGuide_Mouse2_GetKeytoTextString(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_GetKeytoTextString");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.KeyConfigAction = KeyConfigAction;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_KeyConfigActiontoKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UKeyGuideFunctionLibrary_C::KeyGuide_Mouse2_KeyConfigActiontoKey(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext, struct FKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_KeyConfigActiontoKey");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.KeyConfigAction = KeyConfigAction;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_MakePare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USBRuntimeTextBlock*>                 InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<ESBKeyConfigAction>                         InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> ReturnValue                                                (Parm, OutParm, ContainsInstancedReference)
	 */
	void UKeyGuideFunctionLibrary_C::KeyGuide_MakePare(TArray<class USBRuntimeTextBlock*>* InKey, TArray<ESBKeyConfigAction>* InValue, class UObject* __WorldContext, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_MakePare");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_MakePare_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InKey != nullptr)
			*InKey = params.InKey;
		if (InValue != nullptr)
			*InValue = params.InValue;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_MakeMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USBRuntimeTextBlock*>                 InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> TargetMap                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UTextBlock*                                  InSheethTextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuideFunctionLibrary_C::KeyGuide_Mouse2_MakeMessage(TArray<class USBRuntimeTextBlock*>* InKey, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> TargetMap, const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UTextBlock* InSheethTextObject, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_MakeMessage");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage_Params params {};
		params.TargetMap = TargetMap;
		params.KeyConfigData = KeyConfigData;
		params.InSheethTextObject = InSheethTextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InKey != nullptr)
			*InKey = params.InKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDash                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsDodge                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad_MakeString(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, bool IsDash, bool IsDodge, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeString");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.KeyConfigAction = KeyConfigAction;
		params.IsDash = IsDash;
		params.IsDodge = IsDodge;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeJumpAttackText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad_MakeJumpAttackText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeJumpAttackText");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeDodgeAttackText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad_MakeDodgeAttackText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeDodgeAttackText");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ReturnValue1                                               (Parm, OutParm)
	 */
	void UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad2_MakeString(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext, class FText* ReturnValue1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeString");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.KeyConfigAction = KeyConfigAction;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue1 != nullptr)
			*ReturnValue1 = params.ReturnValue1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_KeyConfigActiontoKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad2_KeyConfigActiontoKey(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext, struct FKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_KeyConfigActiontoKey");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.KeyConfigAction = KeyConfigAction;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeMovesText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad2_MakeMovesText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeMovesText");
		
		UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyGuideFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyGuideFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C");
		return ptr;
	}

}


