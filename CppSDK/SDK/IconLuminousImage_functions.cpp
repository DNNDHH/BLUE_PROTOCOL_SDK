#pragma once

 

// Package: IconLuminousImage

#include "Basic.hpp"

#include "IconLuminousImage_classes.hpp"
#include "IconLuminousImage_parameters.hpp"


namespace SDK
{

// Function IconLuminousImage.IconLuminousImage_C.PlayAnimIn
// (Public, BlueprintCallable, BlueprintEvent)

void UIconLuminousImage_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconLuminousImage_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}

}

