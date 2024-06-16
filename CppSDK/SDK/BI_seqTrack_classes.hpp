#pragma once

 

// Package: BI_seqTrack

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BI_seqTrack.BI_seqTrack_C
// 0x0000 (0x0028 - 0x0028)
class IBI_seqTrack_C final : public IInterface
{
public:
	void NSonTick();
	void NSonBegin();
	void NSonEnd();
	void SetSeqTrackInfoString(const class FString& NewParam, int32 NewParam1);
	void GetSeqTrackInfoIndex(int32* NewParam1);
	void GetText(int32 NewParam, class FString* NewParam1);
	void ANon(int32 Test);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_seqTrack_C">();
	}
	static class IBI_seqTrack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBI_seqTrack_C>();
	}
};
static_assert(alignof(IBI_seqTrack_C) == 0x000008, "Wrong alignment on IBI_seqTrack_C");
static_assert(sizeof(IBI_seqTrack_C) == 0x000028, "Wrong size on IBI_seqTrack_C");

}

