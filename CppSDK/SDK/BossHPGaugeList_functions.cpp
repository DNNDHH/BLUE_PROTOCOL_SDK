#pragma once

 

// Package: BossHPGaugeList

#include "Basic.hpp"

#include "BossHPGaugeList_classes.hpp"
#include "BossHPGaugeList_parameters.hpp"


namespace SDK
{

// Function BossHPGaugeList.BossHPGaugeList_C.OnInAnimationCall
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBossHPGaugeList_C::OnInAnimationCall()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossHPGaugeList_C", "OnInAnimationCall");

	UObject::ProcessEvent(Func, nullptr);
}

}

