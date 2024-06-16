#pragma once

 

// Package: KeyGuideFunctionLibrary

#include "Basic.hpp"

#include "KeyGuideFunctionLibrary_classes.hpp"
#include "KeyGuideFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeMovesText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad2_MakeMovesText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_Gamepad2_MakeMovesText");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_KeyConfigActiontoKey
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBKeyConfigAction                      KeyConfigAction                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             Key                                                    (Parm, OutParm, HasGetValueTypeHash)

void UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad2_KeyConfigActiontoKey(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext, struct FKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_Gamepad2_KeyConfigActiontoKey");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.KeyConfigAction = KeyConfigAction;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeString
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBKeyConfigAction                      KeyConfigAction                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue1                                           (Parm, OutParm)

void UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad2_MakeString(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext, class FText* ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_Gamepad2_MakeString");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.KeyConfigAction = KeyConfigAction;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ReturnValue1 != nullptr)
		*ReturnValue1 = std::move(Parms.ReturnValue1);
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeDodgeAttackText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad_MakeDodgeAttackText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_Gamepad_MakeDodgeAttackText");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeJumpAttackText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad_MakeJumpAttackText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_Gamepad_MakeJumpAttackText");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeString
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBKeyConfigAction                      KeyConfigAction                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDash                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsDodge                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad_MakeString(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, bool IsDash, bool IsDodge, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_Gamepad_MakeString");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.KeyConfigAction = KeyConfigAction;
	Parms.IsDash = IsDash;
	Parms.IsDodge = IsDodge;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_MakeMessage
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USBRuntimeTextBlock*>      InKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>TargetMap                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTextBlock*                       InSheethTextObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuideFunctionLibrary_C::KeyGuide_Mouse2_MakeMessage(TArray<class USBRuntimeTextBlock*>& InKey, const TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>& TargetMap, const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UTextBlock* InSheethTextObject, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_Mouse2_MakeMessage");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage Parms{};

	Parms.InKey = std::move(InKey);
	Parms.TargetMap = std::move(TargetMap);
	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.InSheethTextObject = InSheethTextObject;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InKey = std::move(Parms.InKey);
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_MakePare
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USBRuntimeTextBlock*>      InKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<ESBKeyConfigAction>              InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>Return_Value                                           (Parm, OutParm, ContainsInstancedReference)

void UKeyGuideFunctionLibrary_C::KeyGuide_MakePare(TArray<class USBRuntimeTextBlock*>& InKey, TArray<ESBKeyConfigAction>& InValue, class UObject* __WorldContext, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_MakePare");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_MakePare Parms{};

	Parms.InKey = std::move(InKey);
	Parms.InValue = std::move(InValue);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InKey = std::move(Parms.InKey);
	InValue = std::move(Parms.InValue);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_KeyConfigActiontoKey
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBKeyConfigAction                      KeyConfigAction                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             Key                                                    (Parm, OutParm, HasGetValueTypeHash)

void UKeyGuideFunctionLibrary_C::KeyGuide_Mouse2_KeyConfigActiontoKey(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext, struct FKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_Mouse2_KeyConfigActiontoKey");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.KeyConfigAction = KeyConfigAction;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_GetKeytoTextString
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBKeyConfigAction                      KeyConfigAction                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UKeyGuideFunctionLibrary_C::KeyGuide_Mouse2_GetKeytoTextString(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_Mouse2_GetKeytoTextString");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.KeyConfigAction = KeyConfigAction;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_MakeMovesText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTextBlock*                       TextObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuideFunctionLibrary_C::KeyGuide_Mouse2_MakeMovesText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UTextBlock* TextObject, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_Mouse2_MakeMovesText");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.TextObject = TextObject;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.Key Guide Mouse 2 Make Oriento Camera Text
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTextBlock*                       InTextObject                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuideFunctionLibrary_C::Key_Guide_Mouse_2_Make_Oriento_Camera_Text(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UTextBlock* InTextObject, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "Key Guide Mouse 2 Make Oriento Camera Text");

	Params::KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.InTextObject = InTextObject;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_GetPareItems
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>                  InAllChildren                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USBRuntimeTextBlock*>      OutActionTextArray                                     (Parm, OutParm, ContainsInstancedReference)
// TArray<ESBKeyConfigAction>              OutActionConfigArray                                   (Parm, OutParm)

void UKeyGuideFunctionLibrary_C::KeyGuide_GetPareItems(TArray<class UWidget*>& InAllChildren, class UObject* __WorldContext, TArray<class USBRuntimeTextBlock*>* OutActionTextArray, TArray<ESBKeyConfigAction>* OutActionConfigArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_GetPareItems");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems Parms{};

	Parms.InAllChildren = std::move(InAllChildren);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InAllChildren = std::move(Parms.InAllChildren);

	if (OutActionTextArray != nullptr)
		*OutActionTextArray = std::move(Parms.OutActionTextArray);

	if (OutActionConfigArray != nullptr)
		*OutActionConfigArray = std::move(Parms.OutActionConfigArray);
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_GetVerticalChildWidget
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPanelWidget*                     _____                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>                  Out                                                    (Parm, OutParm, ContainsInstancedReference)

void UKeyGuideFunctionLibrary_C::KeyGuide_GetVerticalChildWidget(class UPanelWidget* _____, class UObject* __WorldContext, TArray<class UWidget*>* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_GetVerticalChildWidget");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget Parms{};

	Parms._____ = _____;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);
}


// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeChangeLockText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UKeyGuideFunctionLibrary_C::KeyGuide_Gamepad2_MakeChangeLockText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KeyGuideFunctionLibrary_C", "KeyGuide_Gamepad2_MakeChangeLockText");

	Params::KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

