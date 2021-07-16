#!/system/bin/sh
# SPECTRUM & FRANCO KERNEL MANAGERS
# Profile initialization by Zile995

# helper functions to allow Android init like script
function write() {
    echo -n $2 > $1
}

#Core-A53
echo pwrutilx > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
echo 400000 > /sys/devices/system/cpu/cpu0/cpufreq/scaling_min_freq
echo 1382400 > /sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq
echo 990 > /sys/devices/system/cpu/cpu0/cpufreq/pwrutilx/up_rate_limit_us
echo 1000 > /sys/devices/system/cpu/cpu0/cpufreq/pwrutilx/down_rate_limit_us
echo 0 > /sys/devices/system/cpu/cpu0/cpufreq/pwrutilx/iowait_boost_enable
#Core-A72
echo pwrutilx > /sys/devices/system/cpu/cpu4/cpufreq/scaling_governor
echo 400000 > /sys/devices/system/cpu/cpu4/cpufreq/scaling_min_freq
echo 400000 > /sys/devices/system/cpu/cpu4/cpufreq/scaling_max_freq
echo 1000 > /sys/devices/system/cpu/cpu4/cpufreq/pwrutilx/up_rate_limit_us
echo 1000 > /sys/devices/system/cpu/cpu4/cpufreq/pwrutilx/down_rate_limit_us
echo 0 > /sys/devices/system/cpu/cpu4/cpufreq/pwrutilx/iowait_boost_enable
#Cpu-Boost
echo 0 > /sys/module/cpu_boost/parameters/input_boost_enabled
echo 0:0 1:0 2:0 3:0 4:0 5:0 > /sys/module/cpu_boost/parameters/input_boost_freq
echo 0 > /sys/module/cpu_boost/parameters/input_boost_ms
echo 0 > /sys/module/cpu_boost/parameters/input_devfreq_boost
echo 35 > /sys/module/cpu_boost/parameters/dynamic_stune_boost
#Frame-Boost
echo N > /sys/module/mdss_mdp/parameters/frame_boost
#Workqueue
echo Y > /sys/module/workqueue/parameters/power_efficient
#Scheduler
echo noop > /sys/block/mmcblk0/queue/scheduler
echo noop > /sys/block/mmcblk1/queue/scheduler 
#Adreno-Idler-Driver
echo Y > /sys/module/adreno_idler/parameters/adreno_idler_active
echo 90 > /sys/module/adreno_idler/parameters/adreno_idler_downdifferential
echo 4 > /sys/module/adreno_idler/parameters/adreno_idler_idlewait
echo 9000 > /sys/module/adreno_idler/parameters/adreno_idler_idleworkload
#GPU-Toggles
echo msm-adreno-tz > /sys/class/kgsl/kgsl-3d0/devfreq/governor
echo 0 > /sys/class/kgsl/kgsl-3d0/devfreq/adrenoboost
echo 550000000 > /sys/class/kgsl/kgsl-3d0/max_gpuclk
echo 550000000 > /sys/class/kgsl/kgsl-3d0/devfreq/max_freq
echo 200000000 > /sys/class/kgsl/kgsl-3d0/devfreq/min_freq
echo 6 > /sys/devices/soc.0/1c00000.qcom,kgsl-3d0/kgsl/kgsl-3d0/max_pwrlevel
#echo 8 > /sys/devices/soc.0/1c00000.qcom,kgsl-3d0/kgsl/kgsl-3d0/min_pwrlevel
echo 6 > /sys/devices/soc.0/1c00000.qcom,kgsl-3d0/kgsl/kgsl-3d0/default_pwrlevel
#MMC-HOST
echo 0 > /sys/class/mmc_host/mmc0/clk_scaling/scale_down_in_low_wr_load
echo 0 > /sys/class/mmc_host/mmc1/clk_scaling/scale_down_in_low_wr_load
#DDR-Bus
#echo 0 > /sys/class/devfreq/gpubw/min_freq
#echo 805 > /sys/class/devfreq/cpubw/min_freq
#echo 805 > /sys/class/devfreq/mincpubw/min_freq
#echo 307200 > /sys/class/devfreq/qcom,cci.49/min_freq
#Walt-Toggles
#echo 0 > /proc/sys/kernel/sched_use_walt_cpu_util
#echo 0 > /proc/sys/kernel/sched_use_walt_task_util
#ScheduleTuning
echo -50 > /dev/stune/background/schedtune.boost
echo -10 > /dev/stune/foreground/schedtune.boost
#echo 0 > /dev/stune/top-app/schedtune.boost
echo 0 > /dev/stune/top-app/schedtune.prefer_idle
echo 0 > /dev/stune/background/schedtune.prefer_idle
echo 0 > /dev/stune/foreground/schedtune.prefer_idle
#Cpusets
echo 0-4 > /dev/cpuset/top-app/cpus
echo 1 > /dev/cpuset/top-app/sched_load_balance
echo 0 > /dev/cpuset/top-app/sched_relax_domain_level
echo 0-4 > /dev/cpuset/foreground/cpus
echo 0 > /dev/cpuset/foreground/sched_load_balance
echo 0 > /dev/cpuset/foreground/sched_relax_domain_level
echo 0-1 > /dev/cpuset/background/cpus
echo 0 > /dev/cpuset/background/sched_load_balance
echo 0 > /dev/cpuset/background/sched_relax_domain_level
echo 2-3 > /dev/cpuset/system-background/cpus
#Msm-Thermals
echo 45 > /sys/module/msm_thermal/parameters/temp_threshold
echo 60 > /sys/module/msm_thermal/parameters/core_limit_temp_degC
#Vmpressure
echo 60 > /proc/sys/vm/vfs_cache_pressure
