#pragma once

 

// Package: ColorCorrectRegions

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ColorCorrectRegions_structs.hpp"


namespace SDK
{

// Class ColorCorrectRegions.ColorCorrectRegion
// 0x01D8 (0x0400 - 0x0228)
class AColorCorrectRegion final : public AActor
{
public:
	EColorCorrectRegionsType                      Type;                                              // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19A5[0x3];                                     // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Priority;                                          // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Intensity;                                         // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Inner;                                             // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Outer_ColorCorrectRegion;                          // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Falloff;                                           // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Invert;                                            // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EColorCorrectRegionTemperatureType            TemperatureType;                                   // 0x0241(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19A6[0x2];                                     // 0x0242(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temperature;                                       // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19A7[0x8];                                     // 0x0248(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColorGradingSettings                  ColorGradingSettings;                              // 0x0250(0x0150)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          Enabled;                                           // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ExcludeStencil;                                    // 0x03A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19A8[0x5E];                                    // 0x03A2(0x005E)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ColorCorrectRegion">();
	}
	static class AColorCorrectRegion* GetDefaultObj()
	{
		return GetDefaultObjImpl<AColorCorrectRegion>();
	}
};
static_assert(alignof(AColorCorrectRegion) == 0x000010, "Wrong alignment on AColorCorrectRegion");
static_assert(sizeof(AColorCorrectRegion) == 0x000400, "Wrong size on AColorCorrectRegion");
static_assert(offsetof(AColorCorrectRegion, Type) == 0x000228, "Member 'AColorCorrectRegion::Type' has a wrong offset!");
static_assert(offsetof(AColorCorrectRegion, Priority) == 0x00022C, "Member 'AColorCorrectRegion::Priority' has a wrong offset!");
static_assert(offsetof(AColorCorrectRegion, Intensity) == 0x000230, "Member 'AColorCorrectRegion::Intensity' has a wrong offset!");
static_assert(offsetof(AColorCorrectRegion, Inner) == 0x000234, "Member 'AColorCorrectRegion::Inner' has a wrong offset!");
static_assert(offsetof(AColorCorrectRegion, Outer_ColorCorrectRegion) == 0x000238, "Member 'AColorCorrectRegion::Outer_ColorCorrectRegion' has a wrong offset!");
static_assert(offsetof(AColorCorrectRegion, Falloff) == 0x00023C, "Member 'AColorCorrectRegion::Falloff' has a wrong offset!");
static_assert(offsetof(AColorCorrectRegion, Invert) == 0x000240, "Member 'AColorCorrectRegion::Invert' has a wrong offset!");
static_assert(offsetof(AColorCorrectRegion, TemperatureType) == 0x000241, "Member 'AColorCorrectRegion::TemperatureType' has a wrong offset!");
static_assert(offsetof(AColorCorrectRegion, Temperature) == 0x000244, "Member 'AColorCorrectRegion::Temperature' has a wrong offset!");
static_assert(offsetof(AColorCorrectRegion, ColorGradingSettings) == 0x000250, "Member 'AColorCorrectRegion::ColorGradingSettings' has a wrong offset!");
static_assert(offsetof(AColorCorrectRegion, Enabled) == 0x0003A0, "Member 'AColorCorrectRegion::Enabled' has a wrong offset!");
static_assert(offsetof(AColorCorrectRegion, ExcludeStencil) == 0x0003A1, "Member 'AColorCorrectRegion::ExcludeStencil' has a wrong offset!");

// Class ColorCorrectRegions.ColorCorrectRegionsSubsystem
// 0x0050 (0x0080 - 0x0030)
class UColorCorrectRegionsSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_19A9[0x50];                                    // 0x0030(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ColorCorrectRegionsSubsystem">();
	}
	static class UColorCorrectRegionsSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UColorCorrectRegionsSubsystem>();
	}
};
static_assert(alignof(UColorCorrectRegionsSubsystem) == 0x000008, "Wrong alignment on UColorCorrectRegionsSubsystem");
static_assert(sizeof(UColorCorrectRegionsSubsystem) == 0x000080, "Wrong size on UColorCorrectRegionsSubsystem");

}

