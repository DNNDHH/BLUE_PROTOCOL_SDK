#pragma once

 

// Package: FLIB_Chat

#include "Basic.hpp"

#include "FLIB_Chat_classes.hpp"
#include "FLIB_Chat_parameters.hpp"


namespace SDK
{

// Function FLIB_Chat.FLIB_Chat_C.IsTalkModeContinue
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFLIB_Chat_C::IsTalkModeContinue(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_Chat_C", "IsTalkModeContinue");

	Params::FLIB_Chat_C_IsTalkModeContinue Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FLIB_Chat.FLIB_Chat_C.OnChatHudDragOver
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_Chat_C::OnChatHudDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_Chat_C", "OnChatHudDragOver");

	Params::FLIB_Chat_C_OnChatHudDragOver Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function FLIB_Chat.FLIB_Chat_C.OnChatHudDrop
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_Chat_C::OnChatHudDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_Chat_C", "OnChatHudDrop");

	Params::FLIB_Chat_C_OnChatHudDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function FLIB_Chat.FLIB_Chat_C.CreateClippingAnchors
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                         Anchors                                                (Parm, OutParm, NoDestructor)

void UFLIB_Chat_C::CreateClippingAnchors(class UObject* __WorldContext, struct FAnchors* Anchors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_Chat_C", "CreateClippingAnchors");

	Params::FLIB_Chat_C_CreateClippingAnchors Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Anchors != nullptr)
		*Anchors = std::move(Parms.Anchors);
}


// Function FLIB_Chat.FLIB_Chat_C.IsPhotoMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFLIB_Chat_C::IsPhotoMode(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_Chat_C", "IsPhotoMode");

	Params::FLIB_Chat_C_IsPhotoMode Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FLIB_Chat.FLIB_Chat_C.IsNotPhotoMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFLIB_Chat_C::IsNotPhotoMode(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_Chat_C", "IsNotPhotoMode");

	Params::FLIB_Chat_C_IsNotPhotoMode Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FLIB_Chat.FLIB_Chat_C.IsOffScreen
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidgetRef                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                        InMyGeometry                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InPointerEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D                        InDragStartPos                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsOffScreen                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_Chat_C::IsOffScreen(class UUserWidget* InWidgetRef, const struct FGeometry& InMyGeometry, const struct FPointerEvent& InPointerEvent, const struct FVector2D& InDragStartPos, class UObject* __WorldContext, bool* Param_IsOffScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_Chat_C", "IsOffScreen");

	Params::FLIB_Chat_C_IsOffScreen Parms{};

	Parms.InWidgetRef = InWidgetRef;
	Parms.InMyGeometry = std::move(InMyGeometry);
	Parms.InPointerEvent = std::move(InPointerEvent);
	Parms.InDragStartPos = std::move(InDragStartPos);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param_IsOffScreen != nullptr)
		*Param_IsOffScreen = Parms.Param_IsOffScreen;
}

}

